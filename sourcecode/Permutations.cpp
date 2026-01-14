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

ll n;
void solution(){
cin>>n;
if (n==1){
  cout<<1;
  return;
}
if (n<4){
  wrong;
  return;
}
if (n==4){
  cout<<"2 4 1 3";
  return;
}
ll x=1;
while (x<=n){
  cout<<x<<" ";
  x+=2;
}
x=2;
while (x<=n){
  cout<<x<<" ";
  x+=2;
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
