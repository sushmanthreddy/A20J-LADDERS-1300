#include <bits/stdc++.h>
#define floop(i,a,n) for (int i=a;i<n;i++)
#define pii pair<int,int>
#define pll pair<long long,long long>
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);cout.precision(dbl::max_digits10);
#define pb push_back

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvl vector<vector<long long> >
#define vp vector<pair<long long,long long>>
#define vpp vector<pair<pair<long long,long long>,long long>>
#define mp make_pair
#define all(c) c.begin(),c.end()
#define tr(container, it) \
for(typeof(container.begin()) it = container.begin();it != container.end(); it++)
typedef std::numeric_limits< double > dbl;
using namespace std;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
ll ncr(ll n,ll r) { ll p=1,k=1; if(n-r<r) r=n-r; if(r!=0) {while(r!=0) {p*=n; k*=r; ll temp=gcd(p,k); p/=temp; k/=temp; n--; r--;} } else p=1; return p;}
ll pm(ll x,ll n,ll mod=1000000007) {ll result=1; while(n>0){if(n%2==1) result=((result%mod)*(x%mod))%mod; x=((x%mod)*(x%mod))%mod; n/=2;} return result;}
ll p(ll x,ll n) {ll result=1; while(n>0){if(n%2==1) result=result*x; x=x*x; n/=2;} return result;}
ll prm(ll x,ll y,ll mod=1000000007) {ll res=0,z=1; while(y>0){if(y&1) res=(res+x)%mod; x*=2; x%=mod; y>>=1;}	return res;}
ll factorial[300000+1];
void fact(ll n,ll mod=1000000007) { factorial[0]=1; factorial[1]=1; floop(i,2,n+1) factorial[i] = (i * factorial[i-1]%mod) % mod; }

int32_t main() {
	IOS;
	ll t,i,j,k,n,x,y,z,p,q;
	string s;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		ll a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			if(a[j]==1) x=j;
			if(a[j]==n) y=j;
		}
        if(x>y){
            swap(x,y);
        }
		z=min(max(x,y)+1,min(n-min(x,y),min(x,y)+1+n-max(x,y)));
        cout<<z<<endl;
	}
	return 0;
}