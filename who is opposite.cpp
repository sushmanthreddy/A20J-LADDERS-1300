#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c;
        int h=abs(a-b);

        if(h<2 || c> h*2)
            d= -1;
        else if((c+h) > h*2 )
            d= c-h;
        else
            d=c+h;
        if(a>h && b>h)
            d=-1;

        cout<<d<<endl;
    }
}