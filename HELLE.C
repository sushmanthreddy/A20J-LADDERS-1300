#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, k;
    scanf("%d", &t);
    for (k = 1; k <= t; k++)
    {
        int i, j, n;
        char a[100][100];
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf(" %c ", &a[i][j]);
            }
        }
        int v, min1 = 1e9, min2 = 0;
        for (i = 0; i < n; i++)
        {
            v = 0; min2 = 0;
            for (j = 0; j < n; j++)
            {
                if (a[i][j] == 'O')
                {
                    v++;
                    break;
                }
                else if (a[i][j] == '.')
                {
                    min2++;
                }
            }
            if (v == 0)
            {
                min1 = min(min1, min2);
            }
        }
        int min3 = 1e9, min4 = 0;
        for (i = 0; i < n; i++)
        {
            v = 0; min4 = 0;
            for (j = 0; j < n; j++)
            {
                if (a[j][i] == 'O')
                {
                    v++;
                    break;
                }
                else if (a[j][i] == '.')
                {
                    min4++;
                }
            }
            if (v == 0)
            {
                min3 = min(min3, min4);
            }
        }
        if (min1 == 1e9 && min3 == 1e9)
        {
            printf("Case #%d: Impossible\n", k);
        }
        else
        {
            int minimum = min(min1, min3), count = 0;
            for (i = 0; i < n; i++)
            {
                v = 0; min2 = 0;
                for (j = 0; j < n; j++)
                {
                    if (a[i][j] == 'O')
                    {
                        v++;
                        break;
                    }
                    else if (a[i][j] == '.')
                    {
                        min2++;
                    }
                }
                if (v == 0 && minimum == min2)
                {
                    if (min2 == 1)
                    {
                        for (j = 0; j < n; j++)
                        {
                            a[i][j] = 'X';
                        }
                    }
                    count++;
                }
            }
            for (i = 0; i < n; i++)
            {
                v = 0; min4 = 0;
                for (j = 0; j < n; j++)
                {
                    if (a[j][i] == 'O')
                    {
                        v++;
                        break;
                    }
                    else if (a[j][i] == '.')
                    {
                        min4++;
                    }
                }
                if (v == 0 && minimum == min4)
                {
                    if (min4 == 1)
                    {
                        for (j = 0; j < n; j++)
                        {
                            a[j][i] = 'X';
                        }
                    }
                    count++;
                }
            }
            printf("Case #%d: %d %d\n", k, minimum, count);
        }
    }
}