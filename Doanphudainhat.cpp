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

  ll ans,curans;
  ll curr,curl;
// bool BEGIN_ALLOC;
// bool END_ALLOC;
  ll n;
  struct rent{
  ll l,r;};
  vector <rent> p;

  bool compare(rent a, rent b){
  if (a.l==b.l) return a.r<b.r;
  return a.l<b.l;
  }

  void solution(){
    cin>>n;
    p.resize(n);
    for (ll i=0;i<n;i++){
      ll x,y;
      cin>>x>>y;
      p[i].l=x+32001;
      p[i].r=y+32001;
    }
    sort(p.begin(),p.end(),compare);
    // for (auto x:p)cout<<x.l-32001<<" "<<x.r-32001<<endl;
    curr=p[0].r;
    curl=p[0].l;
    for (ll i=1;i<n;i++){
      if (p[i].l<=curr&&p[i].r>curr){
        curr=p[i].r;
        // cout<<"/1/"<<curr-32001<<endl;
      }
      if (p[i].l>=curl&&p[i].l<=curr) continue;
      else{
        ans=max(ans,llabs(curr-curl));
        curl=p[i].l;
        curr=p[i].r;

        // cout<<"/2/"<<curr-32001<<" "<<curl-32001<<endl;
      }
    }
    // cout<<curr-32001<<" "<<curl-32001<<endl;
    ans=max(ans,llabs(curr-curl));
    cout<<ans<<endl;
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
