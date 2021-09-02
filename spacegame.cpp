#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
       int x, y, i, l;
        scanf("%d %d", &x, &y);
        char s[1000005];
        scanf("%s", s);
        l = strlen(s);
        int a = 0, b = 0, c = 0, d = 0;
        for (i = 0; i < l; i++){
           if (s[i] == 'U')
           {
            a++;
           }
           else if (s[i] == 'R')
           {
            b++;
           }
           else if (s[i] == 'L')
           {
            c++;
           }
            else if (s[i] == 'D')
           {
            d++;
           }
        }
        if (x >= 0 && y >= 0)
       {
        if (b >= x && a >= y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
      }
       else if (x < 0 && y < 0)
      {
        x = abs(x), y = abs(y);
        if (c >= x && d >= y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
      }
       else if (x >= 0 && y < 0)
      {
        y = abs(y);
        if (b >= x && d >= y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
      }
       else if (x < 0 && y >= 0)
      {
        x = abs(x);
        if (c >= x && a >= y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
      }
    }   

}