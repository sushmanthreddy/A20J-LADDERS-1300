#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,f,sum=0,sol=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>f;
        sum+=f;
    }
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1){
           sol+=1;
        }
    }
    cout<<sol<<endl;
    return 0;
}