#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<long long,long long> pll;
typedef vector <bool> vb;
typedef vector<long long> vl;

#define fp(nm) freopen(nm".INP","r",stdin);freopen(nm".OUT","w",stdout);
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define wrong cout<<-1<<endl;
#define sast cout<<ans<<endl;
#define endl '\n'

const ll MAXN = 1e7;
const ll MOD = 1e9+7;

ll n,q;
vl prime(MAXN),a(MAXN),b(MAXN);

void erath(){
  prime[0]=false;
  prime[1]=false;
  prime[2]=true;
  for (ll i=2;i<=MAXN;i++){
    if (prime[i]){
      for (ll j=i*i;j<=MAXN;j+=i) prime[j]=false;
    }
  }
}
void solution(){
  cin>>n>>q;
  a.assign(n+1,0);
  b.assign(n+1,0);
  prime.assign(MAXN,true);
  erath();
  ll tmp=0;
  for (ll i=1;i<=n;i++){
    cin>>a[i];
    if (prime[a[i]]) b[i]=++tmp;
    else b[i]=b[i-1];
  }
  for (ll i=1;i<=q;i++){
    ll l,r;cin>>l>>r;
    ll ans=(prime[a[l]])?b[r]-b[l]+1:b[r]-b[l];
    sast;
  }
}

int main(){
    
boost
// fp("");

ll q=1;
// cin>>q;
while (q--){
solution();
}
return 0;
}
/*  Code by FrederikSama1911 - T2 - GĐ2528 
    Being energized by YC2704
*/
