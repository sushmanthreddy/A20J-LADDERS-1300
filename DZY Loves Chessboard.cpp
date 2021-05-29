#include<bits/stdc++.h>
using namespace std;

int main()
{
        int i,j,k;
        int n,m;

        cin>>n>>m;
        char a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]=='.')
                {
                    if((i+j)%2==0)
                        a[i][j]='B';
                    else
                        a[i][j]='W';
                }
                else
                    continue;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<a[i][j];
            }

            cout<<endl;
        }

        return 0;
}