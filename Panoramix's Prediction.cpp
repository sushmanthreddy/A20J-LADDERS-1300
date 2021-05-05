#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,b,k=0;
    cin>>c>>b;
    int a[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

    for(int i=0;i<15;i++){
        if(c==a[i] && b==a[i+1]){
            k++;
            break;
        }

    }
    if(k==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;

}