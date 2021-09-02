#include<bits/stdc++.h>

using namespace std;


int main(){
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=1;j<=n;j++){
            cin>>a[j];
        }
        int max=0,min=0,ans;
        vector <int> v;
        for(int j=1;j<=n;j++){
            if(a[j]!=a[j+1] && j<=n){
               min=j-max;
               max=j;
               v.push_back(min);   
            }
        }
        ans=* max_element(v.begin(), v.end());
        cout<<ans<<endl;
    }
    
    
}