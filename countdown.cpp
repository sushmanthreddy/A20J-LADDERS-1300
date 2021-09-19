#include<bits/stdc++.h>

using namespace std;

int main(){
    int tt;
    cin>>tt;
    for(int t=0;t<tt;t++){
    int n;
    cin>>n;
    string a;
    cin>>a;
     int count=0;
     for(int i=0;i<n-1;i++){
         if(a[i]!='0'){
            count+=a[i]-'0';
            count+=1;
         }
    }
   if(a[n-1]!='0') count+=a[n-1]-'0';
   cout<<count<<endl;
 }

}