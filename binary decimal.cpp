#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int x=0;
 
        while(n>0)
        {
            int a = n%10;
            x = max(x, a);
            n = n/10;
        }
        cout<<x<<endl;
    }
}