/**
 *    author:  sushmanth
 *    created:       
**/
#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
 
	for (int i = 0; i < n; i++)
	{
		int k = v[i];
		int f = sqrt(k);
		if (f * f != k)
		{
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main(){
  int tt;
	cin >> tt;
	while (tt--)
		solve();
	return 0;
}
