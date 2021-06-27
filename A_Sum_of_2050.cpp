//sushmanth

#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a;
        cin>>a;
        if(a<2050 || a%2050!=0){
            cout<<"-1"<<endl;
            continue;
        }
        a/=2050;
        long long ans=0;
        while(a>0){
          ans+=a%10;
          a/=10;
       }
       cout<<ans<<endl;
    }
    return 0;
}