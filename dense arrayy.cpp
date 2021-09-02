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
        int ans=0;
        for(int j=0;j<l-1;j++){
            int f=min(a[j],a[j+1]);
            int e=max(a[j],a[j+1]);
            if((e<=2*(f))){
                continue;
            }
            else{
                
                 while(e>(2*f))
            {
                e=(e%2==0)?(e/2):(e/2+1);
                ans++;
            }
            }
        }
        cout<<ans<<endl;
    }
}