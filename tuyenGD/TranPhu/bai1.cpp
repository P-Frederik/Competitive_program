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
  cin>>n;
  ll a[n][n];
  for (ll i=0;i<n;i++){
    for (ll j=0;j<n;j++)cin>>a[i][j];
  }
  for (ll k=n-1;k>=0;k--){
    ll i=0,j=k;
    ll curmax=LLONG_MIN;
    while (i<n&&j<n){
      curmax=max(curmax,a[i][j]);
      i++;
      j++;
    }
    i=0;j=k;
    while(i<n&&j<n){
      maxx[i][j]=curmax;
      i++;
      j++;
    }
  }
  for (ll k=1;k<n;k++){
    ll i=k,j=0;
    ll curmax=LLONG_MIN;
    while (i<n&&j<n){
      curmax=max(curmax,a[i][j]);
      i++;
      j++;
    }
    i=k;j=0;
    while(i<n&&j<n){
      maxx[i][j]=curmax;
      i++;
      j++;
    }
  }
  for (ll k=n-1;k>=0;k--){
    ll i=0,j=k;
    ll curmin=LLONG_MAX;
    while (i<n&&j>=0){
      curmin=min(curmin,a[i][j]);
      i++;
      j--;
    }
    i=0;j=k;
    while(i<n&&j>=0){
      minx[i][j]=curmin;
      i++;
      j--;
    }
  }
  for (ll k=0;k<n;k++){
    ll i=k,j=n-1;
    ll curmin=LLONG_MAX;
    while (i<n&&j>=0){
      curmin=min(curmin,a[i][j]);
      i++;
      j--;
    }
    i=k;j=n-1;
    while(i<n&&j>=0){
      minx[i][j]=curmin;
      i++;
      j--;
    }
  }
  ll ans=0;
  for (ll i=0;i<n;i++){
    for (ll j=0;j<n;j++){
      if (a[i][j]==maxx[i][j]&&a[i][j]==minx[i][j]) ans+=a[i][j];
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