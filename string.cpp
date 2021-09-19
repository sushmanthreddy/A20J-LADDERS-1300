#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n, i, l = 0, k = 0, j, h = 0, m = 0, p = 0, b = 0;
    cin>>n;
    string s;
    cin>>s;
    for (i = 0; i < n; i++)
    {
        h = i;
        if (s[i] == 'a')
        {
            l++;
        }
        else
        {
            k++;
        }
        for (j = i + 1; j < n; j++)
        {
            if (s[j] == 'a')
            {
                l++;
            }
            else
            {
                k++;
            }
            if ( l ==  k)
            {
                m++;
                break;
            }
        }
        if (m > 0)
        {
            break;
        }
        l = 0;
        k = 0;

    }
    if (m == 0)
    {
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    else
    {
        cout<<h + 1<<" "<<j + 1<<endl;
    }
    }
}
