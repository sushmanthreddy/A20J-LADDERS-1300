#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,m,n;
    cin>>t;
    while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(i==1||i==n){
					if(j%2==1) cout<<'1';
					else cout<<'0';
				}
				else {
					if(i%2==1&&i!=n-1){
						if(j==1||j==m) cout<<'1';
						else cout<<'0';
					}
					else cout<<'0';
				}
			}
			cout<<endl;
		}
		cout<<endl;
	}
}