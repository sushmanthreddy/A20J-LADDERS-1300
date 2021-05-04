#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();
    int count =0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='7' || s[i]=='4')
        {
            count++;
        }
    }
    if(count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}