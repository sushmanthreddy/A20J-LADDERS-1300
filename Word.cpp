#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int upp=0,low=0;
    string s;
    getline(cin,s);
    int l;
    l=s.length();
    for(int i=0;i<l;i++){
        if (isupper(s[i])){
            upp++;
        }
        else{
            low++;
        }
    }
    if(upp < low)
    {
        for(int i = 0; i < l; i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    if(upp > low)
    {
        for(int i = 0; i < l; i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }
    if(upp == low)
    {
        for(int i = 0; i < l; i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    return 0;
}