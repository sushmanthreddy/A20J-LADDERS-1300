/**
 *    author:  sushmanth
 *    created: 19 june        
**/
#include<bits/stdc++.h>

using namespace std;

int main(){
    int m;
    cin>>m;
    for(int k=0;k<m;k++){
    int n;
    cin>>n;
    int res=0;
    for(int i=1;i<=n;i=i*10+1){
        for(int d=1;d<=9;d++){
            if(i*d<=n){
              res++;
            }
        }
    }
    cout<<res<<endl;
    }
    return 0;
}