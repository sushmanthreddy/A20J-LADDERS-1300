#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l;
        cin>>l;
        int a[l];
        for(int j=0;j<l;j++){
            cin>>a[j];
        }
        int b=0;
        sort(a,a+l);
        for(int j=0;j<l;j++){
            if (a[0] != a[j])
           {
            b++;
           }
		}
        cout<<b<<endl;
    }
}