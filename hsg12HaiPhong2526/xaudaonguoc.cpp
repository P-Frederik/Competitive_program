#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
//freopen (" ","r",stdin);
//freopen (" ","w",stdout);
cin>>s;
string ans="";
ll sum=0;
for (char c:s) {
    if (isalpha(c)) ans=c+ans;
    else sum+=c-'0';
}
if (ans.empty())cout<<sum<<endl<<-1;
else cout<<sum<<endl<<ans;
return 0;
}
