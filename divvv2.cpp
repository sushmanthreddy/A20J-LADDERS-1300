/*
SUSHMANTH SRINIVAS
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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

    int tt,n,h;
    cin>>tt;
    for(int t=0;t<tt;t++){
          cin>>n>>h;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        sort(A,A+n);
        int b=A[n-1];
        int s=A[n-2];
        //cout<<b<<s;
        if(h%(b+s)==0)
        {
            cout<<2*(h/(b+s))<<endl;
        }
        else if((h%(b+s))<=b)
        {
            cout<<(2*(h/(b+s)))+1<<endl;
        }
        else
        {
            cout<<(2*(h/(b+s)))+2<<endl;
        }
    }
   return 0;
}