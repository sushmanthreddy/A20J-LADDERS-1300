#include<bits/stdc++.h>

using namespace std;

int cmpfunc (const void * a, const void * b) {
    return ( (int)a - * (int*)b );
}
int cmc(const void *a, const void *b) {
    return *(char *)b - *(char *)a;
}

void test();
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        test();
    }
}
void test()
{
    int n, i, a[100000], count = 0, k = -1, b[100000], l = 0, x[10000], m, j;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            count++;
        }
    }
    if (count == n - 1)
    {
        cout<<"-1"<<endl;
    }
    else
    {

        for (i = 0; i < n - 1; i++)
        {
            if (a[i] >= a[i + 1])
            {
                b[l] = i;
                l++;
            }
        }
        if (b[l - 1] == n - 2 && a[b[l - 1]] == a[n - 1])
        {
            for (i = 0; i < n - 1; i++)
            {
                if (a[i] > a[i + 1])
                {
                    k = i;
                }
            }
            m = a[k];
            int v = 0;
            for (i = k; i < n; i++)
            {
                b[v] = a[i];
                v++;
            }
            qsort(b, v, sizeof(int), cmpfunc);
            for (i = 0; i < v; i++)
            {
                if (b[i] == m)
                {
                    j = i;
                    break;
                }
            }
            int y = 0;
            for (i = 0; i < v; i++)
            {
                if (i != j - 1)
                {
                    x[y] = b[i];
                    y++;
                }
            }
            for (i = 0; i < k; i++)
            {
                cout<<a[i];
            }
            cout<<b[j - 1];
            qsort(x, y, sizeof(int), cmc);
            for (i = 0; i < y; i++)
            {
                cout<<x[i];
            }
            cout<<endl;
        }
        else
        {
            for (i = 0; i < b[l - 1]; i++)
            {
                cout<<a[i];
            }
            m = a[b[l - 1]];
            int v = 0;
            for (i = b[l - 1]; i < n; i++)
            {
                b[v] = a[i];
                v++;
            }
            qsort(b, v, sizeof(int), cmpfunc);
            for (i = 0; i < v; i++)
            {
                if (b[i] == m)
                {
                    j = i;
                    break;
                }
            }
            cout<<b[j - 1];
            int y = 0;
            for (i = 0; i < v; i++)
            {
                if (i != j - 1)
                {
                    x[y] = b[i];
                    y++;
                }
            }
            qsort(x, y, sizeof(int), cmc);
            for (i = 0; i < y; i++)
            {
                cout<< x[i];
            }
            cout<<endl;
        }
    }
}