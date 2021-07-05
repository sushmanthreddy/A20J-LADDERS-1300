#include<bits/stdc++.h>

using namespace std;
int main(){
    int tt;
    cin>>tt;
    for(int i=0;i<tt;i++){
        int m;
        cin>>m;
        int a[2*m];
        for(int j=0;j<2*m;j++){
            cin>>a[j];
        }
        int count=0,count1=0;
        for(int j=0;j<2*m;j++){
            if(a[j]%2==0){
                count++;
            }
            else{
                count1++;
            }
        }
        if(count==count1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}