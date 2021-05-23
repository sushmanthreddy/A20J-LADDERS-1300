#include<bits/stdc++.h>

using namespace std;
 int main(){
     string s,s2;
     getline(cin,s);
     transform(s.begin(), s.end(), s.begin(), ::tolower);
     int l=s.length();
     for(int i=0;i<l;i++){
     if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
         continue;
     }
     else{
		s2+='.';
		s2+=s[i];

     }
 }
 cout<<s2<<endl;
 return 0;
 }