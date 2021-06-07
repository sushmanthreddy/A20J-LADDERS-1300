#include<bits/stdc++.h>

using namespace std;

int main(){
    int w1,w2,count=0;
    cin>>w1>>w2;
    while(w1<=w2){
        count++;
        w1=w1*3;
        w2=w2*2;
    }
    cout<<count<<endl;
    return 0;
}