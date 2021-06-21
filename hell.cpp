/**
 *    author:  sushmanth
 *    created: 19 june 2021    
**/
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int count=0;
        int a;
        cin>>a;
        for(auto j=a;j>=1;j--){
            string s;
            s=to_string(j);
            s.resize(distance(s.begin(),unique(s.begin(),s.end())));
            if(s.length()==1){
                count++;
            }
            else{
                continue;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}