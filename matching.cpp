#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
 for(int k=0;k<n;k++){
    int x;
    cin>>x;
    int c=(2*x);
    int a[c];
    for(int i=0;i<c;i++){
        cin>>a[i];
    }
    sort(a,a+c);
    for(int j=0;j<x;j++){
        cout<<a[j]<<endl;
        cout<<a[j+x]<<endl;
    }
    cout<<endl;
 }
 return 0;   
}