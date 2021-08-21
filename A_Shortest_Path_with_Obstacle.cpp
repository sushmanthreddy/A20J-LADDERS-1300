#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int t;
  cin>>t;
  int xa,ya,xb,yb,xf,yf;
  while(t--){
    cin>>xa>>ya>>xb>>yb>>xf>>yf;
    if(xb==xa){
      if(ya>yf && yb<yf){
                cout<<ya+yb<<endl;
            }
            else if(ya>yf && yb>yf){
                cout<<abs(ya-yb)<<endl;
            }
            else if(ya<yf && yb<yf){
                cout<<abs(ya-yb)<<endl;
            }
            else if(ya<yf && yb>yf){
                cout<<abs(ya-yb)<<endl;
            }
            else{
                cout<<ya+yb<<endl;
            }
    }
    else if(ya==yb){
      if(xa>xf && xb<xf){
                cout<<xa+xb<<endl;
            }
            else if(xa>xf && xb>xf){
                cout<<abs(xa-xb)<<endl;
            }
            else if(xa<xf && xb<xf){
                cout<<abs(xa-xb)<<endl;
            }
            else if(xa<xf && xb>xf){
                cout<<abs(xa-xb)<<endl;
            }
            else{
                cout<<xa+xb<<endl;
            }
    }
    else{
      cout<<abs(xa-xb)+abs(ya-yb)<<"\n";
    }
  }

}