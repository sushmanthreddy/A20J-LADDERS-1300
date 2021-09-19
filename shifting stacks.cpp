/*sushmanth solution*/
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
 
int main()
{
   ll t;
   cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n];
for(ll i=0;i<n;i++){
cin>>a[i];
}
ll c=0;
string ans="YES";
for(ll i=0;i<n;i++){
    c+=a[i];
if(c>=i){
   c-=i;
}
else{
ans="NO";
}
}
   cout<<ans<<endl;
}
}