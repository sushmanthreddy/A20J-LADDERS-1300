#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int u=0;u<t;u++){
        int n;
        cin>>n;
        string s;
         cin>>s;
        for (int i = 0; i < n; i++){
        if (s[i] == 'U')
        {
            cout<<"D";
        }
        else if (s[i] == 'L')
        {
            cout<<"L";
        }
        else if (s[i] == 'R')
        {
            cout<<"R";
        }
        else if (s[i] == 'D')
        {
            cout<<"U";
        }
    }
    printf("\n");
    }
}