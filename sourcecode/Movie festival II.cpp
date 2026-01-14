#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<long long,long long> pll;
typedef vector <bool> vb;
typedef vector<long long> vl;

#define fp(nm) freopen(nm".INP","r",stdin);freopen(nm".OUT","w",stdout);
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define wrong cout<<-1<<endl;
#define sast cout<<ans<<endl;
#define endl '\n'

const ll MAXN = 1e7;
const ll MOD = 1e9+7;

struct query {
    ll s, t, l;
};
const ll INF = 1e18;
ll n, k, ans = -INF;

void sub1() {
    for (ll i = 1; i <= n; i++) {
        ll s, t; cin >> s >> t;
        ans = max(ans, t - s);
    }
    cout << ans << endl;
}

void sub2() {
    vector<query> f;
    for (ll i = 1; i <= n; i++) {
        ll s, t; cin >> s >> t;
        f.push_back({s, t, t - s});
    }
    for (ll i = 0; i < f.size(); i++) {
        for (ll j = 0; j < f.size(); j++) {
            // l r u v l r
            if (f[j].s > f[i].t || f[j].t < f[i].s) {
                ans = max(ans, f[i].l + f[j].l);
            }
        }
    }
    cout << ans << endl;
}

void sub3() {
    vector<ll> f;
    for (ll i = 1; i <= n; i++) {
        ll s, t; cin >> s >> t;
        f.push_back(t - s);
    }
    ans = 0;
    sort(f.begin(), f.end(), greater<ll>());
    for (ll i = 0; i < k; i++) {
        ans += f[i];
    }
    cout << ans << endl;
}

bool cmp(query x, query y) {
    return x.t < y.t;
}

void sub4() {
    vector<query> f(n + 1);
    for (ll i = 1; i <= n; i++) {
        ll s, t; cin >> s >> t;
        f[i] = {s, t, t - s};
    }
    sort(f.begin() + 1, f.end(), cmp);
    vector<ll> ends(n + 1);
    for (ll i = 1; i <= n; i++) ends[i] = f[i].t;
    vector<ll> p(n + 1);
    for (ll i = 1; i <= n; i++) {
        ll val = upper_bound(ends.begin()+1, ends.begin()+n+1, f[i].s) - ends.begin() - 1;
        p[i] = val;
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, -INF));
    for (ll i = 0; i <= n; i++) dp[i][0] = 0;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= k; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[p[i]][j - 1] + f[i].l);
        }
    }
    cout << dp[n][k] << endl;
}

void solution() {
    cin >> n >> k;
    if (k == 1) {
        sub1();
    } else if (n <= 1000 && k == 2) {
        sub2();
    } else if (k <= 10) {
        sub4();
    } else sub3();
}

int main(){

boost
//fp("");

ll q=1;
//cin>>q;
while (q--){
solution();
}
return 0;
}
/*  Code by FrederikSama1911 - T2 - GĐ2528
    Being energized by YC2704
*/
