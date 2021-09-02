#include<bits/stdc++.h>
typedef long long ll;
 
using namespace std;
void solve(){
    
       ll n;
	cin >> n;
	vector <ll> v(n);
	for(ll i=0;i<n;i++){
		cin >> v[i];
	}
	bool sorted = true;
	for(ll i=1;i<=n;i++){
		if(v[i-1]!=i) sorted = false;
	}
	if(sorted){
		cout << 0 << endl;
		return;
	}
	if(v.front() == 1 || v.back() == n){
		cout << 1 << endl;
		return;
	}
	if(v.front()!=n || v.back()!=1){
		cout << 2 << endl;
		return;
	}
	cout << 3 << endl;

   }

 
int main(){
   //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
   int t;
   cin>>t;
   while(t--){
      solve();
   }
    return 0;
}