#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll digit_sum(ll n){
    ll total=0;
    while(n){
        total+=n%10;
        n/=10;
    }
    return total;
}
void solve(){
    ll n;
    cin>>n;
    while(1){
        if(__gcd(n,digit_sum(n))>1){
            cout<<n<<"\n";
            return;
        }
        n++;
    }
}

int main(){
    int tt;cin>>tt;
    for(int i=0;i<tt;i++){
        solve();
    }
    return 0;
}