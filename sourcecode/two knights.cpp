#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<long long,long long> pll;
typedef vector <bool> vb;
typedef vector<long long> vl;

#define fp(nm) freopen(nm".INP","r",stdin);freopen(nm".OUT","w",stdout);
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define wrong cout<<"NO SOLUTION"<<endl;
#define sast cout<<ans<<endl;
#define endl '\n'

const ll MAXN = 1e7;
const ll MOD = 1e9+7;

ll combine(ll x){
  return x*(x-1)/2;
}
void solution(){
  ll n;
  cin>>n;
  for (ll i=0;i<=n;i++){
  if(i == 0) cout << 0 << endl;
  if(i == 2) cout << 6 << endl;
  if(i >= 3){
    cout<<combine(i * i) - 4 * (i - 1) * (i - 2) << endl;
    }
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
