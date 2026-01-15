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

const ll MAXN = 3*1000000 + 7;
const ll MOD = 1e9+7;
const ll INF = 1e18;

bool BEGIN_ALLOC;
bool END_ALLOC;

vector<ll> countUoc(MAXN, 0);
vb prime(MAXN, true);

vector<array<ll, 9>> pref(MAXN);

void erath() {
    prime[0] = prime[1] = false;
    for (ll i=2;i<=MAXN+1;i++) {
        if (prime[i]) {
            for (ll j=i;j<MAXN;j+=i)countUoc[j]++;
            if (1LL*i*i<MAXN){
                for (ll j=i*i;j<MAXN;j+=i)prime[j]=false;
            }
        }
    }
    for (ll k=0;k<9;k++) pref[0][k] = 0;
    for (ll i=1;i<=MAXN;i++) {
        pref[i][0] = i;
        for (ll k = 1; k <= 8; ++k) {
            pref[i][k] = pref[i - 1][k] + (countUoc[i] >= k);
        }
    }
}

void solution() {
    ll a, b, k;
    cin >> a >> b >> k;
    if (k < 0) k = 0;
    if (k > 8) {
        cout << 0 << endl;
        return;
    }
    cout << (pref[b][k] - pref[a - 1][k]) << endl;
}

signed main(void) {
    boost
    //fp("BAI2");x
    erath();
    ll q = 1;
    cin >> q;
    while (q--) {
        solution();
    }
    return 0;
}
/*  Code by FrederikSama1911 - T2 - GD2528
    Being energized by YC2704
*/
