#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nk, np;
    cin >> n >> k >> l >> c >> d >> p >> nk >> np;
    cout << min(min(k * l / nk, c * d), p / np) / n << endl;
    return 0;
}