#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<bool> vb;
typedef vector<ll> vl;

#define fp(nm) freopen(nm".INP","r",stdin);freopen(nm".OUT","w",stdout);
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define wrong cout<<"IMPOSSIBLE"<<endl;
#define endl '\n'

const ll MAXN = 1e5+6;

ll n,m;
vector<vector<ll>> adj;
vector<int> team;

bool bfs(ll x){
  queue<ll> q;
  q.push(x);
  team[x] = 1;
  while(!q.empty()){
    ll u = q.front();
    q.pop();
    for(ll v : adj[u]){
      if(team[v] == 0){
        team[v] = (team[u] == 1) ? 2 : 1;
        q.push(v);
      }
      else if(team[v] == team[u]) return false;
    }
  }
  return true;
}

void solution(){
    cin >> n >> m;
    adj.assign(n+1, {});
    team.assign(n+1, 0);
    for(ll i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(ll i=1;i<=n;i++){
      if(team[i] == 0){
        if(!bfs(i)){
          wrong
          return;
        }
      }
    }
    for(ll i=1;i<=n;i++) cout<<team[i]<<" ";
    cout << endl;
}

int main(){
    boost
    //fp("");
    
    ll q=1;
    // cin>>q;
    while(q--){
        solution();
    }
    return 0;
}
/*  Code by FrederikSama1911 - T2 - GĐ2528  
    Being energized by YC2704 
*/