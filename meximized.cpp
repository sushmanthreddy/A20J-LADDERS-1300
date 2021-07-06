#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int k,m;
        cin>>m>>k;
        vector <int> v;
       
        for (int j = k + 1; j <= m; ++j) {
          v.push_back(j);
            }
        for (int h = (k + 1) / 2; h < k; ++h) {
          v.push_back(h);
        }
        int y=v.size();
        cout<<y<<endl;
        for(auto e:v){
            cout<<e<<" ";
        }
    }
    return 0;
}