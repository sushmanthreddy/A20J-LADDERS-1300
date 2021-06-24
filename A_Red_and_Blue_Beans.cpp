#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a>b)
            swap(a,b);
            if((a*(c+1))>=b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }    
 return 0;   
}