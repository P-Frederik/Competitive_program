#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
//freopen (" ","r",stdin);
//freopen (" ","w",stdout);
cin>>n;
vector <bool> prime (1000001,true);
prime[1]=false;
for (ll i=2;i<=1000001;i++){
    if (prime[i]){
        for (ll j=i*i;j<=1000001;j+=i) prime[j]=false;
    }
}
ll ans=0;
for (ll i=1;i<=n;i++){
    ll x;cin>>x;
    ll tmp=0,y=x;
    while(y>0){
        tmp+=y%10;
        y/=10;
    }
    if (prime[x]&&prime[tmp]) ans++;
}
cout<<ans<<endl;
return 0;
}
