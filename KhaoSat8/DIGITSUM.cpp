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

ll sumdigit(ll x){
    ll sum=0;
    while (x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
ll poww[36];
void solution(){
    ll a;cin>>a;
    if (a<=9){
        cout<<a<<endl;
        return;
    }
    poww[0] = 1;
    ll tmp = 0, cnt = 0, ans = 0, re = 0;
    for(ll i = 1; i <= 18; i++) poww[i] = poww[i - 1] * 10;
    for(ll i = 0; i <= 18; i++){
        if(tmp + 9 * poww[i] <= a){
            tmp += 9 * poww[i];
            cnt++;
        }
        else {
            for(ll j = 9; j >= 0; j--){
                if(tmp + j * poww[i] <= a){
                    ans += j;
                    tmp += j * poww[i];
                    break;
                }
            }
        }
    }
    ans += cnt * 9;
    re = a - tmp;
     while(re != 0){
        ans += re % 10;
        re /= 10;
    }
    cout << ans;
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