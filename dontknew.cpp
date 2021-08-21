#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int c1=n/3;
        int c2=c1;
        if(n%3==0){
            cout<<c1<<" "<<c2<<endl;
        }
        else if(n%3==1){
            c1 += 1;
            cout<<c1<<" "<<c2<<endl;
        }
        else{
               c2 += 1;
               cout<<c1<<" "<<c2<<endl;
        }
    }
}