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

  const ll MAXN = 1e6+7;
  const ll MOD = 1e9+7;
  const ll INF = 1e18;


  void solution(){
    ll n,m;
    cin>>n>>m;
    vector<vl> a(5*n+1,vl(5*m+1));
    for (ll i=0;i<5*n+1;i++){
      for (ll j=0;j<5*m+1;j++){
        char c;cin>>c;
        a[i][j]=(c=='*')?1:0;
      }
    }
    vl ans(5,0);
    for (ll i=1;i<=5*(n-1)+1;i+=5){
      for (ll j=1;j<=5*(m-1)+1;j+=5){
        ll cnt=0;
        for (ll k=i;k<i+4;k++){
          if (a[k][j]==1)cnt++;
        }
        ans[cnt]++;
      }
    }
    for (auto x:ans)cout<<x<<" ";
  }


  int main(){
      boost
      // auto startTime = chrono::steady_clock::now();
      //fp("");
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
