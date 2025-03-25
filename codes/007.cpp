#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int inf = 0x3f3f3f3f;
int n, m, t, k, i, j;
void solve() {
	int ans = 0;
    string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'x' && s[i + 1] == 'y')  {
			ans++;
			i++;
		}
		else if (s[i] == 'y' && s[i + 1] == 'x') {
			ans++;
			i++;
		}
	}
	cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     s = input()
//     ans = 0
//     for i in range(len(s) - 1):
//         if s[i] == "x" and s[i + 1] == "y":
//             ans += 1
//             i += 1
//         elif s[i] == "y" and s[i + 1] == "x":
//             ans += 1
//             i += 1
//     print(ans)