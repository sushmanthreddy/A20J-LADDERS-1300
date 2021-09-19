#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int i, *a, n;
	long long int s = 0, k, l;
	scanf("%d", &n);
	a = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		scanf("%d", (a + i));
		s = s + *(a + i);
	}
	k = s % n;
	l = k * (n - k);
	printf("%lld\n", l);
    }
}