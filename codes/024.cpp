#include <iostream>
using namespace std;
const int N = 1e5 + 5;
int n, ans, l, r, cnt, a[N], p[N]; 
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> l >> r;
		p[l] = i;
		p[i] = r;
	}
	for (int i = p[0]; cnt <= n; i = p[i]) {
		cnt++;
		if (i == n - 1) break;
	}
	if (cnt * 2 < n) ans = cnt;
	else ans = n - cnt;
	cout << ans << '\n';
    
	return 0;
}