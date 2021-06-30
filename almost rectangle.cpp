#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin >> n;
	vector<int> x, y;
	string g[400];
	for (int i=0; i<n; ++i) {
		cin >> g[i];
		for (int j=0; j<n; ++j)
			if (g[i][j]=='*')
				x.push_back(i), 
				y.push_back(j);
	}
	if (x[0]==x[1])
		x[1]=x[0]==0;
	if (y[0]==y[1])
		y[1]=y[0]==0;
	for (int i : x)
		for (int j : y)
			g[i][j]='*';
	for (int i=0; i<n; ++i)
		cout << g[i] << "\n";
	    
	}
	return 0;
}
