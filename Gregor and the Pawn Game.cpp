#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l;
        string o,a;
        cin>>l>>o>>a;
        int count=0;
        for(int j=0;j<l;j++){
            if(a[j]=='1' ){
                if(o[j]=='0'){
                    count++;
                    o[j]='2';
                }
                else if(o[j-1]=='1' && j-1>=0){
                    count++;
                    o[j-1]='2';
                }
                else if(o[j+1]=='1' && j+1<l){
                    count++;
                    o[j+1]='2';
                }
            }
        }
        cout<<count<<endl;
    }
}