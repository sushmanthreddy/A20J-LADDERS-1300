#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l;
        cin>>l;
        string s;
        cin>>s;
        string s1;
        s1=s;
        sort(s.begin(),s.end());
        int count=0;
        for(int j=0;j<l;j++){
             if(s[j]!=s1[j]){
              count++;
             }
             else{
                 continue;
             }
        }
        cout<<count<<endl;
    }
}