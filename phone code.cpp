#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string f;
    cin>>f;
    int m=f.length();
    for(int i=1;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            if(f[j]!=s[j]){
   			m=j;
   			break;
   		   }

        }  
        
    }
  cout<<m<<endl;
return 0;
}