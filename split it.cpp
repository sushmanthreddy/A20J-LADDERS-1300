#include<bits/stdc++.h>

using namespace std;

int main(){

    int tt;
    cin>>tt;
    int  n, k, l = 0, h, i, j, count;
    for(int t=0;t<tt;t++){
        int n,h,k;
        cin>>n>>k;
        char s[105];
		scanf("%s", s);
        l = strlen(s);
		h = (k * 2) + 1;
		if (h > n )
		{
			printf("NO\n");
		}
		else if (k == 0)
		{
			printf("YES\n");
		}
		else
		{
			count = 0;
			for (j = 0; j < k; j++)
			{
				if (s[j] != s[n - j - 1])
				{
					count = 1;
					break;
				}
			}
			if (count == 1)
			{
				printf("NO\n");
			}
			else
			{
				printf("YES\n");
			}

    }
    }

}