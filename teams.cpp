#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,s,b,a,number=0;
    cin>>n;
    while(n--){
        cin >> s >> b >> a;
        if (s + b + a >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
    }