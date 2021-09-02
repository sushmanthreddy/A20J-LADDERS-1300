#include<bits/stdc++.h>


using namespace std;

typedef long long int ll;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        ll c,d;
        cin>>c>>d;
    if (c == d && c != 0)
    {
        cout<<"1"<<endl;
    }
    else if (c == d && c == 0)
    {
        cout<<"0"<<endl;
    }
    else if ((c + d) % 2 == 0)
    {
        cout<<"2"<<endl;
    }
    else if ((c + d) % 2 != 0)
    {
        cout<<"-1"<<endl;
    }
  }
}
