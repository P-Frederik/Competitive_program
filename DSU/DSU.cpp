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

const ll MAXN =1e6+7;
const ll MOD = 1e9+7;
const ll INF = 1e18;

// bool BEGIN_ALLOC;
// bool END_ALLOC;
struct dsu{
    vl parent;
    vl size;
    void make_set(ll n){
        parent.resize(n+1);
        size.resize(n+1);
        for (ll i=1;i<=n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    ll find(ll u){
        if (u==parent[u])return u;
        return parent[u]=find(parent[u]);
    }
    void join(ll a,ll b){
        a=find(a);
        b=find(b);
        if (a!=b){
            if (size[a]>size[b]) swap(a,b);
            parent[b]=a;
            size[a]+=size[b];
        }
    }
}DSU;
void solution(){
    ll n,k;cin>>n>>k;
    DSU.make_set(n);
    for (ll i=1;i<=k;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        if (x==1)DSU.join(y,z);
        if (x==2){
            if (DSU.find(y)==DSU.find(z))cout<<"YES"<<endl;
            if (DSU.find(y)!=DSU.find(z))cout<<"NO"<<endl;
        }
    }
}

int main(){
    boost
    // auto startTime = chrono::steady_clock::now();
    // fp("TRUYVAN");
    ll q=1;
    // cin>>q;
    // prefix();
    while(q--){
      solution();
    }
  //   auto endTime = chrono::steady_clock::now();
  // cerr << fixed << setprecision(2) << "[Static memory: " << abs((&BEGIN_ALLOC) - (&END_ALLOC)) / (1024.0 * 1024.0) << "mb]\n";
  // cerr << "[Time elapsed : " << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << "ms]\n";
    return 0;
}