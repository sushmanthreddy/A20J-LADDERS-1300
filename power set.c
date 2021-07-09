#include <stdio.h>
#include <stdlib.h>
void subset(char arr[], char data[], int start, int end, int index, int r)
{
    int j, i;
    if (index == r) {
            if((arr[0]>=65 && arr[0]<=90)||(arr[0]>=97 && arr[0]<=122))
           {
                printf("[");
                for (j = 0; j < r-1; j++)
                {
                    printf("'%c', ", data[j]);
                }

                printf("'%c'], ",data[r-1]);
           }
           else{
                printf("[");
                for (j = 0; j < r-1; j++)
                {
                    printf("%c, ", data[j]);
                }

                printf("%c], ",data[r-1]);
           }
        return;
    }
    for (i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        subset(arr, data, i+1, end, index+1, r);
    }
}

void printsubset(char arr[], int n, int r)
{
    char data[r];
    subset(arr, data, 0, n - 1, 0, r);
}
int check(char s[],int n)
{
    if(s[0]!=91)
    {
        return 0;
    }
    int i=0;
    int kp[3]={0,0,0};
    while(i<n)
    {
        if(i!=0)
        {
            if((s[i]>=65 && s[i]<=90) &&(s[i-1]>=65 && s[i-1]<=90))
            {
                return 0;
            }
            if((s[i]>=97 && s[i]<=122) &&(s[i-1]>=97 && s[i-1]<=122))
            {
                return 0;
            }
            if((s[i]>=48 && s[i]<=57) &&(s[i-1]>=48 && s[i-1]<=57))
            {
                return 0;
            }
        }
        if(s[i]>=65 && s[i]<=90)
        {
            kp[0]=1;
        }
        if(s[i]>=97 && s[i]<=122)
        {
            kp[1]=1;
        }
        if(s[i]>=48 && s[i]<=57)
        {
            kp[2]=1;
        }
        i++;
    }
    int l=0;
    for(int i=0;i<3;i++)
    {
        if(kp[i]==1)
        {
            l++;
        }
    }
    if(l==1)
    {
        return 1;
    }
    return 0;
}
int main()
{

    
    freopen("input.txt", "r", stdin);
    char s[100];
    while(gets(s))
    {
        int n=0;
        char s1[100];
        int n1=0;
        while(s[n1]!='\0')
        {
            n1++;
        }
        int t=check(s,n1+1);
        if(t==1)
        {
            int i=0;
            while(s[i]!='\0')
            {
                if((s[i]>=65 &&s[i]<=90)||(s[i]>=48 && s[i]<=57)||(s[i]>=97 && s[i]<=122))
                {
                    s1[n]=s[i];
                    n++;
                }
                i++;
            }
            printf("[");
            for(int i=0;i<=n;i++)
            {
                printsubset(s1,n,i);
            }
            printf("]\n");

        }
        else
        {
            printf("Error, input is not in correct format. Use [] with elements separated by , . E.g., [1, 2, 3]\n");
        }
    }
    
    freopen("output.txt", "w", stdout);

    return 0;
}
