#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int t,n,x;
	ll sum,ans;
	cin>>t;
	while(t--){
		cin>>n>>x;
		int ar[n]; 
        ans=0;
		sum=0;
		for(int i=0; i<n; i++){
			cin>>ar[i];
			ans+=ceil((float)ar[i]/x);
			sum+=ar[i];
		}
		cout<<fixed<<setprecision(0)<<ceil(sum/(float)x)<<" "<<ans<<'\n';
	}
  return 0;  
} 


