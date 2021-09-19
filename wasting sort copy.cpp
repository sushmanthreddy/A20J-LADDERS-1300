#include<bits/stdc++.h>

using namespace std;

int main(){
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    int tt;
    cin>>tt;
    for(int t=0;t<tt;t++){
        int n, i, count = 0, k = 0, l = 0, p;
    cin>>n;
    char s[200];
    scanf("%s", s);
    for (i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            l++;
        }
        else
        {
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        count = count + s[i] - '0';
        if (s[i] == '0')
        {
            k++;
        }
    }
    if (count == 0)
    {
        cout<<"0"<<endl;
    }
    else if (k == n - 1 && s[n - 1] != '0')
    {
        cout<<count<<endl;
    }
    else if (k == n - 1 && s[n - 1] == '0')
    {
        cout<<count + 1<<endl;
    }
    else if (k == 0)
    {
        cout<<count + n - 1<<endl;
    }
    else
    {
        if (l == 0)
        {
            cout<<count + k<<endl;
        }
        else
        {
            cout<<count + n - k<<endl;
        }

    }
}

}