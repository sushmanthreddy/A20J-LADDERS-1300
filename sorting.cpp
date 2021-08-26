#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],ans=0;
		for(int i=0;i<n;i++)cin>>a[i];
		if(is_sorted(a,a+n)){
            cout<<"0"<<endl;
            continue;
        }
		while(!is_sorted(a,a+n)){
			if(ans%2){
				for(int j=1;j<n-1;j+=2){
					if(a[j]>a[j+1])swap(a[j],a[j+1]);
				}
			}else{
				for(int j=0;j<n-1;j+=2){
					if(a[j]>a[j+1])swap(a[j],a[j+1]);
				}
			}
			ans++;
		}
		cout<<ans<<endl;
	}
    return 0;
}