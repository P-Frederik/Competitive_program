#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;

#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define wrong cout<<"-1\n";
#define endl '\n'

const ll INF = 1e18;
ll n, m, q;
vvl dist;

void solution() {
    cin >> n >> m >> q;
    dist.assign(n + 1, vl(n + 1, INF));
    for (ll i = 1; i <= n; i++) dist[i][i] = 0;
    for (ll i = 0; i < m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c);
        dist[b][a] = min(dist[b][a], c);
    }
    for (ll k = 1; k <= n; k++) {
        for (ll i = 1; i <= n; i++) {
            for (ll j = 1; j <= n; j++) {
                if (dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    while (q--) {
        ll a, b;
        cin >> a >> b;
        if (dist[a][b] == INF) wrong
        else cout << dist[a][b] << endl;
    }
}

int main() {
    boost
    //fp("");
    ll t = 1;
    //cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
/* Code by Gia Phat - T2 - GD2528
  Being energized by YC2704
*/
