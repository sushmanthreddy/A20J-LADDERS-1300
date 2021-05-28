#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int j=0,pass=0;
    string s1 ("hello");
    for(int i=0;i<s.length();i++){
        if(s[i]==s1[j]){
            j++;
            pass++;
            if(pass==5){
                break;
            }
        }
    }
    if(pass==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}