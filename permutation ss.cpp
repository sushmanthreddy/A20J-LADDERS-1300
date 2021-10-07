/*
SUSHMANTH SRINIVAS
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
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
 


int main(){
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

        int tt;
        cin>>tt;
        for(int t=0;t<tt;t++){
                ll f = 1, m = 1e9 + 7;
                int n, i;
                cin>>n;
        for (i = 3; i <= 2 * n; i++) {
             f = (f * i) % m;
        }
        cout<<f<<endl;
        }

        
        return 0;
}