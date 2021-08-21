#include<bits/stdc++.h>

using namespace std;
string s;

int main(){
    int t;
	cin >> t;
	while(t -- ){
		cin >> s ;
		int len = s.size() - 1;
		int l = 0, r = len;
		while(l <= r){
			if(s[l] - 'a' == r - l ) l ++;
			else if(s[r] - 'a' == r - l ) r -- ;
			else break; 
		}
		if(l > r) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;

}