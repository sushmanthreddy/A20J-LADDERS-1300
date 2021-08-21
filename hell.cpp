#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l;
        cin>>l;
        int a[l];
        for(int j=0;j<l;j++){
            cin>>a[j];
        }
        long long ans=0;
        for(int k=1;k<l;k++){
           ans=max(ans, 1LL * a[k] * a[k - 1]);
        }
            cout << ans << '\n';
    }
}