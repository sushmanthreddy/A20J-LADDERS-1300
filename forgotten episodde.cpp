#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    long long m=(n * (n+1))/2;
    int a[n-1];
    long long sum=0;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<m-sum<<endl;
}