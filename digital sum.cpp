#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        if(n<9){
                cout<<0<<endl;
                continue;
           }
        else{
                 cout<<(n+1)/10<<endl;
            }
    }
}
