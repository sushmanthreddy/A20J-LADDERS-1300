#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0,count1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            count++;
        }
        else{
           count1++;
        }
    }
    if(count>count1){
        cout<<"Anton"<<endl;
    }
    else if(count==count1){
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
return 0;
}