#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fp(nm) freopen(nm".INP", "r", stdin); freopen(nm".OUT", "w", stdout);
#define endl '\n'
const ll MOD = 1e9 + 7;
const ll MAX = 1e7;
ll n;
vector <ll> a (MAX);
void output(){
  for (ll i=1;i<=n;i++){
    cout<<a[i];
  }
  cout<<endl;
  return;
}
void solution(ll x) {
  for (ll j=0;j<=1;j++){
    a[x]=j;
    if (x==n){
      output();
      continue;
    }
    else {
      solution(x+1);
      continue;
    }
  }
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // fp("");
    cin>>n;
    solution(1);
    return 0;
}
/* Code by Gia Phat - T2 - GD2528 */
