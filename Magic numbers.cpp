#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool flag=true;
    
    for(int i=0;i=s.length();){
        if(s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4')
            {
                i+=3;
            }
        else if(s[i]=='1' && s[i+1]=='4')
            {
                i+=2;//cout<<"14"<<endl;
            }
        else if(s[i]=='1')
            {
                i++;//cout<<"14"<<endl;
            }
        else{
             flag=false;
             break;
        }
    }
    if (flag=false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
    return 0;
}