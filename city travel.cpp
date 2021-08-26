#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a,f = 0;
        for(int i=1;i<=n;i++){
            cin >> a;
            if(a==1&&f==0){
                cout << n + 1 << " ";
                f = 1;
            }
            cout << i << " ";
        }
        if(f==0){
            cout << n + 1;
        }
        cout << endl;
    }
}