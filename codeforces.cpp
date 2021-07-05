#include<bits/stdc++.h>

using namespace std;

void solve(){
        int l;
        cin>>l;
        int a[l];
        for(int j=0;j<l;j++){
            cin>>a[j];
        } 
        for(int j=0;j<l;j++){
            if(a[j]%2!=0){
                cout<<a[j]<<endl;
            }
        }
        for(int j=0;j<l;j++){
            if(a[j]%2==0){
                cout<<a[j]<<endl;
            }
        }
    return;
}


int main(){
    int tt;
    cin>>tt;
    for(int i=0;i<tt;i++){
        solve();
    }
    return 0;
}