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
    vl parent;
    vl size;
    vl sum;
    void make_set(ll n){
        parent.resize(n+1);
        size.resize(n+1);
        sum.resize(n+1);
        for (ll i=1;i<=n;i++){
            parent[i]=i;
            size[i]=1;
            sum[i]=i;
        }
    }
    ll find(ll u){
        if (parent[u]==u) return u;
        return parent[u]=find(parent[u]);
    }
    void match(ll a,ll b){
        a=find(a);
        b=find(b);
        if (a==b) return;
        if (size[a]>size[b])swap(a,b);
        parent[a]=b;
        size[a]+=size[b];
        sum[a]+=sum[b];
        sum[b]=sum[a];
    }
    ll getsum(ll u){
        return sum[find(u)];
    }
}dsu;
void solution(){
    ll n,q;
    cin>>n>>q;
    dsu.make_set(n);
    for (ll i=1;i<=q;i++){
        ll x,y;cin>>x>>y;
        if (x==1){
            ll z;cin>>z;
            dsu.match(y,z);
            // cout<<y<<" "<<dsu.sum[y]<<" "<<z<<" "<<dsu.sum[z]<<endl;
        }
        if (x==2) cout<<dsu.getsum(y)<<endl;
    }
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
//     auto endTime = chrono::steady_clock::now();
//   cerr << fixed << setprecision(2) << "[Static memory: " << abs((&BEGIN_ALLOC) - (&END_ALLOC)) / (1024.0 * 1024.0) << "mb]\n";
//   cerr << "[Time elapsed : " << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << "ms]\n";
    return 0;
}
/*  Code by FrederikSama1911 - T2 - GD2528
    Being energized by YC2704
*/