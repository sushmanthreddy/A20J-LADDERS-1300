#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x=sqrt((a*b)/c);
    int y=sqrt((b*c)/a);
    int z=sqrt((c*a)/b);
    int val=(x+y+z)*4;
    cout<<val<<endl;
}