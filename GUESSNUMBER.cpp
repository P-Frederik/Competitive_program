
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<bool> vb;
typedef vector<ll> vl;

#define fp(nm) freopen(nm".INP","r",stdin);freopen(nm".OUT","w",stdout);
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define wrong cout<<"NO"<<endl;
#define endl '\n';
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

const ll MAXN = 1e5+6;
const ll MOD = 1e9+7;
const ll INF = 1e18;

//bool BEGIN_ALLOC;
//bool END_ALLOC;
vl a;
void erath(){
    vb prime(MAXN,true);
    prime[1]=false;
    for (ll i=2;i<=MAXN;i++){
        if (prime[i]){
            a.push_back(i);
            for (ll j=i*i;j<=MAXN;j+=i)prime[j]=false;
        }
    }
}
ll logarit(ll base,ll val){
    ll cnt=0;
    ll tmp=1;
    while (tmp*base<=val){
        tmp*=base;
        cnt++;
    }
    return cnt;
}
void solution(){
  ll n;
  cin>>n;
  erath();
  ll ans=0;
  for (ll x:a){
    if (x>n)break;
    ans+=logarit(x,n);
  }
  cout<<ans<<endl;
}

int main(){
    boost
//    auto startTime = chrono::steady_clock::now();
    fp("GUESSNUMBER");
    ll q=1;
    // cin>>q;
    while(q--){
      solution();
    }
//    auto endTime = chrono::steady_clock::now();
//  cerr << fixed << setprecision(2) << "[Static memory: " << abs((&BEGIN_ALLOC) - (&END_ALLOC)) / (1024.0 * 1024.0) << "mb]\n";
//  cerr << "[Time elapsed : " << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << "ms]\n";
    return 0;
}
/*  Code by FrederikSama1911 - T2 - GD2528
    Being energized by YC2704
*/
