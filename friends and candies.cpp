//sushmanth reddy
// june 23 4:30
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m;
        cin>>m;
        int a[m];
        int r=0;
        for(int j=0;j<m;j++){
             cin>>a[j];
             r+=a[j];
        }
        if(r%m!=0){
            cout<<"-1"<<endl;
            return 0;
        }
        r/=m;
        int s=0;
        for(int j=0;j<m;j++){
            if(r<a[j]){
                s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}