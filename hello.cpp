#include<bits/stdc++.h>

using namespace std;

int main(){
    int l,q;
    cin>>l>>q;
    int a[l];
    int g=0,h=0;
    for(int i=1;i<=l;i++){
        cin>>a[i];
    }
    for(int i=1;i<=l;i++){
        if(a[i]==1){
        g++;
        }
        else{
            h++;
        }
    }
    for(int i=1;i<=q;i++){
        int c,b;
        cin>>c>>b;
        if(c==1){
            a[b]=1-a[b];
            g--;
        }
        else if(c==2) {
            if(b>g){
                cout<<'0'<<endl;
            }
            else{
                cout<<'1'<<endl;
            }
        }
    }
}