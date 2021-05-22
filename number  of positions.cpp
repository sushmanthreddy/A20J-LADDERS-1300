#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,n,b;
    cin >> n >> a >> b;
    n = n - a;
    if (n <= b) {
        cout << n;
    } else {
        cout << b + 1;
    }
}