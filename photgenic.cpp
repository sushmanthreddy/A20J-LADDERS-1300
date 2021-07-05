#include<bits/stdc++.h>
using namespace std;
int  main(){
long long n,i,t,k,a,b,c;
cin>>t;
while(t--){
  cin>>n;
  long long a[n+5];
  for(i=1;i<=n;i++)cin>>a[i];
  if(a[1]!=a[2]){
    if(a[1]==a[3])cout<<"2\n";
    else
        cout<<"1\n";
    continue;
  }
  for(i=3;i<=n;i++){
    if(a[i]!=a[i-1]){cout<<i<<'\n'; break;}
  }
}
}