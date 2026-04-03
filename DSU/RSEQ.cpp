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
    vl par,size,sum;
    void make_set(ll n){
        par.resize(n+1);
        size.resize(n+1);
        sum.resize(n+1);
        for (ll i=1;i<=n;i++){
            par[i]=i;
            sum[i]=i;
            size[i]=1;
        }
    }
    ll get(ll u){
        if (u==par[u]) return u;
        else return par[u]=get(par[u]);
    }
    void Union(ll a,ll b){
        a=get(a);
        b=get(b);
        if (a==b) return;
        if (size[a]<size[b]) swap(a,b);
        par[b]=a;
        size[a]+=size[b];
        sum[a]+=sum[b];
    }
}dsu;

void solution(){
    ll n,t;
    cin>>n>>t;
    vl a(n+2);
    a[0]=INF;
    a[n+1]=INF;
    vb visited(n+2);
    visited[0]=true;
    visited[n+1]=true;
    dsu.make_set(n);
    for (ll i=1;i<=n;i++){
        cin>>a[i];
    }
    for (ll i=1;i<=n;i++){
        dsu.sum[i]=a[i];
    }
    vl quest(t+1);
    for (ll i=1;i<=t;i++){
        cin>>quest[i];
        visited[quest[i]]=true;
    }
    ll curSum=0;
    for (ll i=1;i<=n;i++){
        bool ok=false;
        if (!visited[i]){
            if (!visited[i-1]){
                ok=true;
                dsu.Union(i,i-1);
                ll a=dsu.get(i);
                curSum=max(curSum,dsu.sum[a]);
            }
            if (!visited[i+1]){
                ok=true;
                dsu.Union(i,i+1);
                ll a=dsu.get(i);
                curSum=max(curSum,dsu.sum[a]);
            }
            curSum=max(curSum,a[i]);
        }
    }
    vl ans(t+1);
    for (ll i=t;i>=1;i--){
        ans[i]=curSum;
        ll pos=quest[i];
        visited[pos]=false;
        if (pos>1&&!visited[pos-1]) dsu.Union(pos,pos-1);
        if (pos<n&&!visited[pos+1]) dsu.Union(pos,pos+1);
        ll tmp=dsu.get(pos);
        curSum=max(curSum,dsu.sum[tmp]);
        curSum=max(curSum,a[pos]);
    }
    for (ll i=1;i<=t;i++) cout<<ans[i]<<endl;
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