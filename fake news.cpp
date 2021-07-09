#include <bits/stdc++.h>
 
using namespace std;
 
int main ()
{
	string n, m;
	n = "heidi";
	cin >> m;
	int g;
	g = 0;
	for (int i = 0; i < m.size() and g != 5; i++)
		if (n[g] == m[i])
			g++;
	if (g == 5)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}