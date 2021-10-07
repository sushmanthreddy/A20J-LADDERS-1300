#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int tt;
    cin>>tt;
    for(int t=0;t<tt;t++){
        int a,b,c,m;
        int n;
        cin>>a>>b>>c>>m;
        n=m;
        if(m==0){
            cout<<"YES"<<endl;
            continue;
        }
        int count=0;
        for(int i=m;i>0;i--){
            if(a>1){
               a=a/2;
               count++;  
            }
            else if(b>1){
                b=b/2;
                count++;
            }
            else if(c>1){
                c=c/2;
                count++;
            }
        }
        if(count==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}