#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int sum=0;
        int m;
        cin>>m;
        int a[m];
        for(int j=0;j<m;j++){
            cin>>a[j];
        sum+=a[j];
        }
        if(sum>m){
           cout<<sum-m<<endl;
        }
        else if(sum==m){
        cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}