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

const ll MAXN = 1e9+1;
const ll MOD = 1e9+7;
const ll INF = 1e18;

// bool BEGIN_ALLOC;
// bool END_ALLOC;

struct DSU{
    vl parent,size;
    void make_set(ll n){
        parent.resize(n+1);
        size.resize(n+1);
        for (ll i=1;i<=n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    ll get(ll u){
        if (u==parent[u])return u;
        else return parent[u]=get(parent[u]);
    }
    void join(ll a,ll b){
        a=get(a);
        b=get(b);
        parent[a]=b;
    }
}dsu;

void solution(){
    ll n;cin>>n;
    dsu.make_set(n);
    for (ll i=1;i<=n;i++){
        ll x;cin>>x;
        cout<<dsu.get(x)<<" ";
        dsu.join(dsu.get(x),(dsu.get(x)%n)+1);
    }
}

int main(){
    boost
    auto startTime = chrono::steady_clock::now();
    //fp("");
    ll q=1;
    // cin>>q;
    while(q--){
      solution();
    }
//     auto endTime = chrono::steady_clock::now();
//   cerr << fixed << setprecision(2) << "[Static memory: " << abs((&BEGIN_ALLOC) - (&END_ALLOC)) / (1024.0 * 1024.0) << "mb]\n";
//   cerr << "[Time elapsed : " << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << "ms]\n";
    return 0;
}
/*  Code by FrederikSama1911 - T2 - GD2528
    Being energized by YC2704
*/