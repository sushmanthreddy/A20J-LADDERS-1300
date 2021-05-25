#include<bits/stdc++.h>

using namespace std;

int main(){
    int ntest; cin >> ntest;
    while(ntest--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
 
        int ans = n;
        for(int i = 0; i < n; ++i) 
        if(a[i] == a[0]) ans--;
 
        cout << ans << endl;
    }
 
    return 0;
    
}