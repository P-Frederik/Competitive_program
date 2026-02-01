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

const ll MAXN = 1e6+7;
const ll MOD = 1e9+7;
const ll INF = 1e18;

bool BEGIN_ALLOC;
bool END_ALLOC;

void solution(){
  ll m,n,k;
  cin>>m>>n>>k;
  vector<vector<ll>> diff(m+2,vector<ll>(n+2,0));
  for(ll p=0;p<k;p++){
    ll x,y,u,v;
    cin>>x>>y>>u>>v;
    diff[x][y]+=1;
    diff[u+1][y]-=1;
    diff[x][v+1]-=1;
    diff[u+1][v+1]+=1;
  }
  vector<vector<ll>> a(m+1,vector<ll>(n+1,0));
  for(ll i=1;i<=m;i++){
    for(ll j=1;j<=n;j++){
      diff[i][j]+=diff[i-1][j]+diff[i][j-1]-diff[i-1][j-1];
      a[i][j]=diff[i][j];
    }
  }
  for (ll i=1;i<=m;i++){
    for (ll j=1;j<=n;j++){
      cout<<a[i][j]+10<<"    ";
    }
    cout<<endl;
  }
  vector<vector<ll>> dp(m+1,vector<ll>(n+1,0));
  ll ans=1;
  for(ll i=1;i<=m;i++){
    for(ll j=1;j<=n;j++){
      dp[i][j]=1;
      if(i>1&&j>1){
        if(a[i][j]==a[i-1][j]&&a[i][j]==a[i][j-1]&&a[i][j]==a[i-1][j-1]){
          dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
        }
      }
      ans=max(ans,dp[i][j]);
    }
  }
  cout<<ans<<endl;
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