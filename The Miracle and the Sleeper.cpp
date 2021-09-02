#include<bits/stdc++.h>

using namespace std;int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long l,r;
        cin>>l>>r;
        long long k;
        k = (r / 2) + 1;
        if (k >= l)
      {
        cout<< r % k<<endl;
      }
      else
      {
       cout<< r % l<<endl;
     }
 
 }
}