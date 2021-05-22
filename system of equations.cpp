#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,count=0;
    cin>>n>>m;
    for(int i=0;i<=max(n,m);i++){
        for(int j=0;j<=max(n,m);j++){
            if((i*i)+j==n && (j*j)+i==m){
            ++count;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}