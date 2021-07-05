
#include<bits/stdc++.h>
using namespace std;
int q,w,n,m,s; 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		if(m>q)
		{
			w=q;
			q=m;
			s=i+1; 
		}
		else if(m>w)
			w=m; 
	}
	cout<<s<<" "<<w; 
}