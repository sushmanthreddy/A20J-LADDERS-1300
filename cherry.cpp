#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l,max=0;
        cin>>l;
        int a[l];
        for(int k=0;k<l;k++){
            cin>>a[k];
        }
        for(int k=0;k<l-1;k++){
            int s=a[k]*a[k+1];
            if(s>max){
                max=s;
            }
        }
        cout<<max<<endl;
    }
}