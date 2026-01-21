/*
Có N thành phố 1..N nối bởi các con đường một chiều. Mỗi con đường có hai giá trị: độ dài và chi phí phải trả để đi qua. Bob ở thành phố 1. Bạn hãy giúp Bob tìm đường đi ngắn nhất đến thành phố N, biết rằng Bob chỉ có số tiền có hạn là K mà thôi.

Input
Dòng đầu tiên ghi t là số test.

Với mỗi test, dòng đầu ghi K (0≤K≤104).

Dòng 2 ghi N (2≤N≤100).

Dòng 3 ghi R là số đường nối. (1≤R≤104)

Mỗi dòng trong N dòng sau ghi 4 số nguyên S, D, L, T mô tả một con đường nối giữa S và D với độ dài L (1≤L≤100) và chi phí T (0≤T≤100).

Lưu ý có thể có nhiều con đường nối giữa hai thành phố.

Output
Với mỗi test, in ra độ dài đường đi ngắn nhất từ 1 đến N mà tổng chi phí không quá K. Nếu không tồn tại, in ra -1.

*/
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
    ll k,n,r;
    cin>>k>>n>>r;
    vector<vl> to(n + 1), len(n + 1), cost(n + 1);
    for (ll i=0;i<r;i++){
        ll s,d,l,t;
        cin>>s>>d>>l>>t;
        to[s].push_back(d);
        len[s].push_back(l);
        cost[s].push_back(t);
    }
    vector<vl> dist(n + 1, vl(k + 1, INF));
    priority_queue<array<ll,3>, vector<array<ll,3>>, greater<>> pq;
    dist[1][0] = 0;
    pq.push({0, 1, 0});
    while (!pq.empty()){
        auto cur = pq.top(); pq.pop();
        ll d = cur[0], u = cur[1], c = cur[2];
        if (d != dist[u][c]) continue;
        for (ll i = 0; i < (ll)to[u].size(); i++){
            ll v = to[u][i];
            ll nc = c + cost[u][i];
            if (nc > k) continue;
            ll nd = d + len[u][i];
            if (nd < dist[v][nc]){
                dist[v][nc] = nd;
                pq.push({nd, v, nc});
            }
        }
    }
    ll ans = INF;
    for (ll c = 0; c <= k; c++) ans = min(ans, dist[n][c]);
    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}

int main(){
    boost
    // auto startTime = chrono::steady_clock::now();
    //fp("");
    ll q=1;
    cin>>q;
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