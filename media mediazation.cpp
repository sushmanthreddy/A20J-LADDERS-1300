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
    
        int tc;
        cin >> tc;
        for(int i=1;i<=tc;i++){
        int n,s;
        cin>>n>>s;
	cout << s / (n-((n-1)/2)) << '\n';
        }
        return 0;
}