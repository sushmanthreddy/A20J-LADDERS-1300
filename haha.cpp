#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,f=0,t,w=0,q=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<n;j++){
            if(a[j]%2==0){
               w++;
            }
            else{
                q++;
            }
        }
        if(abs(w-q)>=2){
            cout<<"-1"<<endl;
            continue;
        }
        for(int j=0;j<n;j++){
            if(a[j]%2==0){
                for(int k=j;k<n;k++){
                    if(a[k]%2!=0){
                       f=k-j;
                       t+=f;
                    }
                    else{
                        continue;
                    }
                }
            }
            else{
                for(int k=j;k<n;k++){
                    if(a[k]%2==0){
                        f=k-j;
                        t+=f;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        cout<<f<<endl;
    }
}