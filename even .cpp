#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,k;
    cin>>n>>k;
    vector<int>ar;
        for(int j=1; j<=n; j+=2){
            ar.push_back(j);
        }
        for(int k=2; k<=n; k+=2){
            ar.push_back(k);
        }

    cout<<ar[k-1]<<endl;
}