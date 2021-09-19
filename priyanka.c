#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef long long int ll;

ll max(ll a, ll b) {
    return a > b ? a : b;
}
#define pr printf
#define sc scanf
//qsort(a, n, sizeof(int), cmpfunc);
void test();
int main()
{
    test();
}
void test()
{
    int a, b, c, p, l, max1 = 0, v;
    sc("%d %d %d",&a,&b,&c);
    pr("%d\n",a);
    pr("%d\n",b);
    pr("%d\n",c);
    int count = 0;
    while (a != 0)
    {
        p = a % 10;
        count++;
        a = a / 10;
        if (count == 3)
        {
            break;
        }
    }
    count = 0;
    while (b != 0)
    {
        l = b % 10;
        count++;
        b = b / 10;
        if (count == 2)
        {
            break;
        }
    }
    while (c != 0)
    {
        v = c % 10;
        b = b / 10;
        max1 = max(max1, v);
        c = c / 10;

    }
    pr("%d\n", p * l * max1);

}