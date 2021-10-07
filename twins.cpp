#include<bits/stdc++.h>

using namespace std;

int  main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int c;
    cin>>c;
    int a[c];
    float sum=0;
    for(int i=0;i<c;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/2;
    sort(a, a + c, greater<int>());
    int ans=0;
    for(int i=0;i<c;i++){
        ans+=a[i];
        if(ans>sum){
            cout<<i+1<<endl;
            break;
        }
    }
}