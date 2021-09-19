/*sushmanth 's solution*/
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int tt;
    cin>>tt;
    for(int t=0;t<tt;t++){
        long long a;
        cin>>a;
       if(a%2!=0){
           cout<<"YES"<<endl;
       }
       else{
           while (a % 2 == 0)
			{
				a = a/ 2;
			}
			if (a == 1)
			{
				printf("NO\n");
			}
			else
			{
				printf("YES\n");
			}
       }
    }
    return 0;
}