#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
typedef struct array {
    int first, second;
} point;
ll  min(ll  a, ll b) {
    return a < b ? a : b;
}
ll max(ll a, ll b) {
    return a > b ? a : b;
}
int cmpfunc (const void * a, const void * b) {
    return ( * (int*)a - * (int*)b );
}
int cmc(const void *a, const void *b) {
    return *(char *)b - *(char *)a;
}
int comp(const void* a, const void* b) {
    long long i = (long long)a;
    long long j = (long long)b;
    return (int)((i > j) - (i < j));
}
#define pr printf
#define sc scanf
#define re(i,a,b) for(int i=a;i<b;i++)
#define I 1e18
#define in32(x) scanf("%d", &x)
#define out32(x) printf("%d\n", x)
//qsort(a, n, sizeof(int), cmpfunc);
void test();
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    scanf("%d", &t);
    while (t--)
    {
        test();
    }
}
void test()
{
    int n, i, j, k, l = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        l = 0; k = 2 * n - (i - 1) * 2;
        for (j = 1; j <= 2 * n; j++)
        {
            if (i == 1)
            {
                if (j <= n)
                {
                    pr("(");
                }
                else
                {
                    pr(")");
                }
            }
            else
            {
                if (j <= (i - 1) * 2)
                {
                    if (j & 1)
                    {
                        pr("(");
                    }
                    else
                    {
                        pr(")");
                    }
                }
                else
                {
                    l++;
                    if (l <= k / 2 )
                    {
                        pr("(");
                    }
                    else
                    {
                        pr(")");
                    }

                }
            }
        }
        pr("\n");
    }


}