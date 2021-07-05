#include<bits/stdc++.h>

using namespace std;

int main(){
    int tt;
    cin>>tt;
    for(int i=0;i<tt;i++){
        int l;
        cin>>l;
        int a[l];
        for(int j=0;j<l;j++){
            cin>>a[j];
        }
        int count =0,count1=0;
        for(int j=0;j<l;j++){
            if(a[j]==1){
                count++;
            }
            else if(a[j]==2){
                count1--;
            }
            else if(a[j]==3){
                if(count>count1){
                    count1++;
                }
                else{
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}