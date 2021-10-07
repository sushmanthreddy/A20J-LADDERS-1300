#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    int tt;
    cin>>tt;
    for(int t=0;t<tt;t++){
        int a,b,c,m;
        int n;
        cin>>a>>b>>c>>m;
        int f=a+b+c-3;
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        int mn=arr[2]-arr[1]-arr[0]-1;
        if(m>=mn && m<=f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}