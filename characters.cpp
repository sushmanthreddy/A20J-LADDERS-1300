#include<bits/stdc++.h>

using namespace std;
 int main(){
        int t;
    cin>>t;
    while(t--)
    {
        long long  n,a,b;
        cin>>n>>a>>b;
 
        string s;
        cin>>s;
 
        long long  c=1;
 
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                c++;
        }
 
        if(b>=0)
        {
            cout<<n*(a+b)<<"\n";
            continue;
        }
        else
        {
            cout << (c / 2 + 1) * b + a * n << "\n";
        }
    }
 }