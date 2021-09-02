#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, q, t, x;
	scanf("%d%d", &n, &q);
	int a[n], i, c = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] == 1)
		{
			c++;
		}
	}
	while (q--)
	{
		scanf("%d %d", &t, &x);
		if (t == 1)
		{
			if (a[x - 1] == 1)
			{
				a[x - 1] = 0;
				c--;
			}
			else
			{
				a[x - 1] = 1;
				c++;
			}
		}
		else if (t == 2)
		{
			if (c >= x)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
	}
	return 0;
}