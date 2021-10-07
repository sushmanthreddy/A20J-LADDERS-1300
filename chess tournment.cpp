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
        cin >> tt;
        for(int t=1;t<=tt;t++){
            int l;
            cin>>l;
            string s;
            cin>>s;
            int count=0;
            for(int i=0;i<s.length();i++){
                    if(s[i]=='2'){
                            count++;
                    }
            }
            char a[l][l];
            for(int i=0;i<l;i++){
                    for(int j=0;j<l;j++){
                         if(i==j){
                                 a[i][j]='X';
                         }
                         else{
                                 a[i][j]='=';
                         }
                    }
            }
            if(count==1 || count==2){
                    cout<<"NO"<<endl;
                    continue;
            }
            else{
                    cout<<"YES"<<endl;
                    for(int i=0;i<l;i++){
                            if(s[i]=='2')
                            for(int j=i+1;j<l+i;j++){
                                    if(s[j%l]=='2'){
                                        a[i][j%l]='+';
                                        a[j%l][i]='-';
                                        break;
                                    }
                                    
                            }
                    }
            }
            for(int i=0;i<l;i++){
                    for(int j=0;j<l;j++){
                            cout<<a[i][j];
                        }
                cout<<endl;
            }
    
        }
        return 0;
}