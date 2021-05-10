#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 92) {
            a[i] += 32;
        }
        if (b[i] < 92) {
            b[i] += 32;
        }
    }
    if (a.compare(b)==0){
        cout<<"0"<<endl;
    }
    else if(a.compare(b)<0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    return 0;
    }