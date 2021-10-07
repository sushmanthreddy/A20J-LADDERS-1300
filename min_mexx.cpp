#include<bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int tt;
    cin>>tt;
    for(int t=0;t<tt;t++){
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0' && s[i+1]=='1'){
                count++;
            }
            else if(i==s.length()-1 && s[i]=='0'){
                count++;
            }
        }
        if(count>2){
            cout<<2<<endl;
        }
        else{
            cout<<count<<endl;
        }   
    } 
}