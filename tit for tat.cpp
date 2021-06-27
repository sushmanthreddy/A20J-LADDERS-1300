/**
 *    author:  sushmanth
 *    created:       
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ll t,i,j,k,n;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    vector<ll>v(n);
	    for(i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    i=0;j=n-1;
	    while(k>0 && i<j)
	    {
	        if(i==j)
	        {
	            j++;continue;
	        }
	        if(v[i]!=0)
	        {
	            v[i]--;v[j]++;k--;
	        }
	        else
	        {
	            if(v[i]==0)
	            {
	                i++;
	            }
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
}