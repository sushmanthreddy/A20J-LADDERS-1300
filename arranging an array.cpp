#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l;
        cin>>l;
        int a[l];
        vector <int> odd;
        vector <int> even;
        for(int j=0;j<l;j++){
            int x;
            cin>>x;
            if(x%2==0){
                even.push_back(x);
            }
            else{
                odd.push_back(x);
            }
        }
        int o=odd.size();
        int e=l-o;
        int ans=e*o;
        for (int r = 0; r < o; r++)
        {
            for (int u = r+1; u < o; u++)
            {
                if((__gcd(odd[r], 2*odd[u]))>1)
                    ans++;
            }
            
        }
         ans += (e * (e - 1) / 2);
        cout<<ans<<endl;
    }
}