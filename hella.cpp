#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
#ifndef ONLINE_JUDGE
freopen("consistency_chapter_1_input.txt", "r", stdin);
freopen("consistency_chapter_1_validation_output.txt", "w", stdout);
#endif
int t, i, g;
scanf("%d", &t);
for (i = 1; i <= t; i++)
{
g = i;
string s;
cin>>s;
int i, j, l = s.length(), c = 0, o = 0;
int f[256] = {0};
for (i = 0; i < l; i++)
{
if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
{
o++;
}
else
{
c++;
}
}
for (i = 0; i < l; i++)
{
f[s[i]]++;
}
int max1 = 0, max2 = 0;
for (i = 65; i <= 95; i++)
{
if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
{
if (f[i] > max1)
{
max1 = f[i];
}
}
else if (f[i] != 0)
{
if (f[i] > max2)
{
max2 = f[i];
}
}
}
ll x, y, min1;
x = 2 * (c - max2) + o;
y = 2 * (o - max1) + c;
min1 = min(x, y);
printf("Case #%d: ", g);
printf("%lld\n", min1);
}
}