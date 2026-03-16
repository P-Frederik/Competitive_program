#include<bits/stdc++.h>
using namespace std;

void intit(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("file.inp","r",stdin);
    freopen("file.ans","w",stdout);
}
int main() {
    intit();
    ll n,m,ans;
    cin>>n>>m;
    for (ll i=0;i<n;i++){
        ll tmp=i/2;
        ans+=tmp;
    }
    for (ll i=0;i<m;i++){
        ll tmp2=sqrt(i);
        ans+=tmp2;
        if (tmp2*tmp2==i) ans--;
    }
    return 0;
}
