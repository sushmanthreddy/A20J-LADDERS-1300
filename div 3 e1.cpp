/*
SUSHMANTH SRINIVAS
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define endl '\n'

 
/*
Don't forget
1. If you are looking at editorial, remember that you are accepting defeat.
2. [If stuck] Don't stick to one approach and attack with different approaches.
Write everything down, analyze the G-spot and attack throught it.
3. Don't look at standings during the contest.
4. Don't try to code fast and code concetrately instead or bugs will eat you in the sleep.
5. When you are writing return, make sure that there are no input/global operations after that
*/
 

 
void solve(){
        ll n;
        cin >> n;
        vector <ll> v(n);
        deque <ll> d;
        for(ll i=1;i<=n;i++){
                cin >> v[i-1];
        }
        reverse(v.begin(),v.end());
        for(ll i=0;i<n;i++){
                if(d.empty()){
                        d.pb(v.back());
                }
                else{
                        if(v.back()<d.front()){
                                d.push_front(v.back());
                        }
                        else{
                                d.pb(v.back());
                        }
                }
                v.pop_back();
        }
        for(auto x : d){
                cout << x << " ";
        }
        cout << endl;
}
 
int main(){
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif
    
        int tc;
        cin >> tc;
        for(int i=1;i<=tc;i++){
                //cout << "Case #" << i << ": ";
                solve();
        }
        return 0;
}