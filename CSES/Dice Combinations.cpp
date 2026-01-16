#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<bool> vb;
typedef vector<ll> vl;

#define fp(nm) freopen(nm".INP","r",stdin);freopen(nm".OUT","w",stdout);
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define wrong cout<<"IMPOSSIBLE"<<endl;
#define endl '\n'

const ll MAXN = 1e5+6;
const ll MOD=1e9+7;

vl dp(MAXN);
ll n;
void solution(){
  cin>>n;
  dp.assign(n+1,0);
  dp[0]=1;
  for (ll i=1;i<=n;i++){
    for (ll j=1;j<=6;j++){
      if (i-j>=0) dp[i]=(dp[i]%MOD+dp[i-j]%MOD)%MOD;
    }
  }
  cout<<dp[n]<<endl;
}

int main(){
    boost
    //fp("");

    ll q=1;
    // cin>>q;
    while(q--){
        solution();
    }
    return 0;
}
/*  Code by FrederikSama1911 - T2 - GĐ2528
    Being energized by YC2704
*/
