#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int tt;
    cin>>tt;
 for(int i=0;i<tt;i++)
  {
   ll p,a,b,c;
   cin>>p>>a>>b>>c;
    if(p%a==0 || p%b==0 || p%c==0){
        cout<<0<<"\n";
        continue;
    }
   ll ans=min({a - p%a,b - p%b,c - p%c});
   cout<<ans<<endl;
 }  
return 0;
}