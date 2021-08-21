#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2!=0)
		n++;
		if(n<=6)
		cout<<15<<endl;
		else
		cout<<5*(n/2)<<endl;
	}
	
	
	
}