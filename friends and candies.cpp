/*author :
sushmanth
june 23  3:40
*/
#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
  int n;
  cin >> n;
  int a[n];
  int s = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s += a[i];
  }
  if (s % n != 0) {
    cout << "-1" << endl;
    return;
  }
  s /= n;
  int res = 0;
  for (int i = 0; i < n; i++) {
    if (s < a[i]) {
      res++;
    }
  }
  cout << res << endl;
}
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}