#include<bits/stdc++.h>

using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int c=(w*(w+1))/2;
    int b=(k*c);
    if(b<=n){
        cout<<"0"<<endl;
    }
    else{
        cout<<b-n<<endl;
    }
}