#include<bits/stdc++.h>

/*
Don't forget
1. If you are looking at editorial, remember that you are accepting defeat.
2. [If stuck] Don't stick to one approach and attack with different approaches.
Write everything down, analyze the G-spot and attack throught it.
3. Don't look at standings during the contest.
4. Don't try to code fast and code concetrately instead or bugs will eat you in the sleep.
5. When you are writing return, make sure that there are no input operations after that
*/

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l;
        cin>>l;
        char a[l];
        for(int j=1;j<=l;j++){
            cin>>a[j];
        }
        int count1=0;
        for(int j=1;j<=l;j++){
            if(a[j]=='?'){
              count1++;
            }
        }
        if(count1==l){
            for(int j=1;j<=l;j++){
                if(a[j]=='?' && j%2==0){
                a[j]='R';
            }
            else if(a[j]=='?' && j%2!=0){
                 a[j]='B';
            }
         }
        }
        int count=0;
        char y;
        for(int j=1;j<=l;j++){
           if(a[j]=='?'){
               count++;
           }
           else{
               y=a[j];
               break;
           }
        }
        for(int j=count;j>=1;j--){
            if(y=='B'){
                a[j]='R';
                y   ='R' ;
            }
            else if(y=='R'){
                a[j]='B';
                y   ='B';
            }
        }
        for(int j=1;j<=l;j++){
            if(a[j]=='?'){
                if(a[j-1]=='B'){
                    a[j]='R';
                }
                else if(a[j-1]=='R'){
                    a[j]='B';
                }
            }
        }
        for(int j=1;j<=l;j++){
            cout<<a[j];
        }
        cout<<endl;
    }
    
}