#include<bits/stdc++.h>

using namespace std;

int main(){
    int tt;
    cin>>tt;
    for(int i=0;i<tt;i++){
      int n,k1,k2;
      cin>>n>>k1>>k2;
      int w,b;
      cin>>w>>b;
      if(k1 + k2 >= 2 * w && (n - k1) + (n - k2) >= 2 * b){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
    }
}