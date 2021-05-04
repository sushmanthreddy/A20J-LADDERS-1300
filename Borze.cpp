#include <bits/stdc++.h>

using namespace std;

int main(){
    int l;
    string s1,s2;
    cin>>s1;
    l=s1.length();
    for(int i=0;i<l;i++){
        if (s1[i]=='.'){
            s2+='0';
        }
        if(s1[i]=='-' && s1[i+1]=='.'){
            s2+='1';
            ++i;
        }
        if(s1[i]=='-' && s1[i+1]=='-'){
            s2+='2';
            ++i;
        }
    }
    cout<<s2<<endl;
    return 0;
}