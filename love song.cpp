#include<bits/stdc++.h>
using namespace std;
int n,q,l,r,i,a[100007];
string s;
main()
{for(cin>>n>>q>>s,s='0'+s;i++<n;a[i]=a[i-1]+s[i]-96);
for(;cin>>l>>r;cout<<a[r]-a[l-1]<<'\n');
}