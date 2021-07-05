#include<bits/stdc++.h>

using namespace std;

int main(){
    int tt;cin>>tt;
    for(int i=0;i<tt;i++){
        int s;
        cin>>s;
        int a[s];
        for(int i=0;i<s;i++){
            cin>>a[i];
        }
        sort(a,a+s);
        cout<<a[0]<<endl;
        vector <int> v;
        for(int j=1;j<s;j++){
            if(a[j]==a[j-1]){
                v.push_back(a[j]);
            }
            else{
                cout<<a[j]<<endl;
            }
        }
        for(auto k:v){
            cout<<k<<endl;
        }
    }
}