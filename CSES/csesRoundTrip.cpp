#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<bool> vb;

#define fp(nm) freopen(nm".INP","r",stdin);freopen(nm".OUT","w",stdout);
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define wrong cout<<"IMPOSSIBLE"<<endl;
#define endl '\n'

const ll MAXN = 1e5+5;

ll n, m;
vector<vl> adj;
vb visited;
vl parent;
vl path;

bool dfs(ll u, ll p) {
  visited[u] = true;
  for (ll v : adj[u]) {
    if (v == p) continue;
    if (visited[v]) {
      path.push_back(v);
      ll cur = u;
      while (cur != v) {
        path.push_back(cur);
        cur = parent[cur];
      }
      path.push_back(v);
      reverse(path.begin(), path.end());
      return true;
    } 
    else {
      parent[v] = u;
      if (dfs(v, u)) return true;
    }
  }
  return false;
}

void solution() {
  cin >> n >> m;
  adj.assign(n+1, {});
  visited.assign(n+1, false);
  parent.assign(n+1, -1);
  for (ll i = 0; i < m; i++) {
    ll u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for (ll i = 1; i <= n; i++) {
    if (!visited[i]) {
      if (dfs(i, -1)) {
        cout << path.size() << endl;
        for (ll x : path) cout << x << " ";
        cout << endl;
        return;
      }
    }
  }
  wrong
}

int main() {
    boost
    //fp("");
    ll q = 1;
    //cin >> q;
    while (q--) {
        solution();
    }
    return 0;
}
/*  Code by FrederikSama1911 - T2 - GĐ2528
    Being energized by YC2704
*/