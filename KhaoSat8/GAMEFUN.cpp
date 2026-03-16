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

const ll MAXN = 1e9+1;
const ll MOD = 1e9+7;
const ll INF = 1e18;

// bool BEGIN_ALLOC;
// bool END_ALLOC;

void solution(){
    ll r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for (ll i=1;i<=9;i++){
        for (ll j=1;j<=9;j++){
            for (ll k=1;k<=9;k++){
                for (ll z=1;z<=9;z++){
                    if (i!=j&&j!=k&&k!=z&&z!=i&&i+j==r1&&k+z==r2&&i+k==c1&&j+z==c2&&i+z==d1&&j+k==d2){
                        cout<<i<<" "<<j<<endl;
                        cout<<k<<" "<<z<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<-1<<endl;
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
//     auto endTime = chrono::steady_clock::now();
//   cerr << fixed << setprecision(2) << "[Static memory: " << abs((&BEGIN_ALLOC) - (&END_ALLOC)) / (1024.0 * 1024.0) << "mb]\n";
//   cerr << "[Time elapsed : " << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << "ms]\n";
    return 0;
}
/*  Code by FrederikSama1911 - T2 - GD2528
    Being energized by YC2704
*/