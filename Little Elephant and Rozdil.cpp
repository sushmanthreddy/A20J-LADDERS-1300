#include<bits/stdc++.h>

using namespace std;

int main(){
    int e,count=0,b;
    cin>>e;
    int a[e];
    for(int i=0;i<e;i++){
        cin>>a[i];
    }
    int n = sizeof(a) / sizeof(a[0]);
    int m=*min_element(a, a + n);
    for(int i=0;i<n;i++){
        if(a[i]==m){
            count++;
            b=i+1;
        }
    }
    if (count>1){
        cout<<"Still Rozdil"<<endl;
    }
    else{
        cout<<b<<endl;
    }
}