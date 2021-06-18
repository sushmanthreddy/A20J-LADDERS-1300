#include <bits/stdc++.h>

 
using namespace std;
 
int main()
{
 
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int k;
        cin>>k;
        int g=__gcd(k,100-k);
        int x=k/g;
        int y=(100-k)/g;
 
        cout<<x+y<<"\n";
 
        
    }
 
    return 0;
}