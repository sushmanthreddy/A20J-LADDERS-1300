#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n;
    cin>>n;
    int x=1;
    long long sum = 0;
    int c=0;
 
    while(sum<n )
    {
      sum += x;
      x += 2;
      c++;
    }
    cout<<c<<"\n";
    }
    
    }