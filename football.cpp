#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int count=1;
    getline(cin,str);
    int l=str.length();
    for(int i=0;i<l;i++){
        if (str[i]==str[i-1])
        {
           count+=1;
           if (count==7){
                cout << "YES" << endl;
                return 0;
           }
        }
        else{
            count=1;

        }
    }
    cout<<"NO"<<endl;
    return 0;
}