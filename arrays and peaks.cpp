/**
 *    author:  sushmanth
 *    created: june 30 2021   
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int32_t main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        if(n%2==0)
        {
            if(k>(n/2-1))
            {
                cout<<-1<<endl;
            }
            else{
                int s=1,e=n;
                while(k--)
                {
                    cout<<s<<" "<<e<<" ";
                    s++;
                    e--;
                }
                for(int i=s;i<=e;i++)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
        else{
            if(k>(n/2))
            {
                cout<<-1<<endl;
            }
            else{
                int s=1,e=n;
                while(k--)
                {
                    cout<<s<<" "<<e<<" ";
                    s++;
                    e--;
                }
                for(int i=s;i<=e;i++)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
