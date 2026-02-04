#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<bool> vb;
typedef vector<ll> vl;

#define fp(nm) freopen(nm".INP","r",stdin);freopen(nm".OUT","w",stdout);
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define wrong cout<<"NO"<<endl;
#define endl '\n'
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

const ll MAXN = 1e3+6;
const ll MOD = 1e9+7;
const ll INF = 1e18;

bool BEGIN_ALLOC;
bool END_ALLOC;

ll maxx[MAXN][MAXN],minx[MAXN][MAXN];
void solution(){
  ll n;
  cin >> n;
    ll val = 0;
    for(ll i = 1; i * i <= n; i++) val += n / i;
    ll l = sqrt(n) + 1;
    while(l <= n){
        ll p = n / l;
        ll r = n / p;
        val += (r - l + 1) * p;
        l = r + 1;
    }
    ll ucln = __gcd(val, n * n);
    cout << val / ucln << "/" << n * n / ucln << endl;
}


int main(){
    boost
    // auto startTime = chrono::steady_clock::now();
    //fp("");
    ll q=1;
    // cin>>q;
    while(q--){
      solution();
    }
  //   auto endTime = chrono::steady_clock::now();
  // cerr << fixed << setprecision(2) << "[Static memory: " << abs((&BEGIN_ALLOC) - (&END_ALLOC)) / (1024.0 * 1024.0) << "mb]\n";
  // cerr << "[Time elapsed : " << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << "ms]\n";
    return 0;
}
/*  Code by FrederikSama1911 - T2 - GD2528
    Being energized by YC2704
*/
