#include<bits/stdc++.h>

using namespace std;

int main(){
    int c,p;
    cin>>c>>p;
    while (c!=0)
    {

     if(c%p==0){
       cout<<c/p<<endl;
       c=c-(c/p);
       p--;
     }
     else{
         cout<<c/p<<endl;
         c=c-c/p;
         p--;
     } 
    }
    return 0;
}