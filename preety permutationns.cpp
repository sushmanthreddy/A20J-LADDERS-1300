#include<bits/stdc++.h>

using namespace std;

int main(){
    int tt;
    cin>>tt;
    for(int i=0;i<tt;i++){
        int m;cin>>m;
        if(m%2==0){
            for(int i=1;i<m;i+=2)
			cout<<i+1<<" "<<i<<" ";
        }
        else{
            cout<<"3 1 2 ";
			for(int i=4;i<=m;i+=2)
			cout<<i+1<<" "<<i<<" ";
        }
    }
}