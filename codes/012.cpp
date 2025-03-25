#include <bits/stdc++.h>
using namespace std;
int n, m, t, k, i, j;
string s;
void solve() {
    cin >> n;
	cin >> s;
	int sum = 0;
	bool a, b, c, d;
	a = b = c = d = 1;
	for (i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			if (a) sum++;
			a = 0;
		}
		else if (s[i] >= 'a' && s[i] <='z') {
			if (b) sum++;
			b = 0;
		}
		else if (s[i] >= '0' && s[i] <='9') {
			if (c) sum++;
			c = 0;
		}
		else if (d) {
			sum++;
			d = 0;
		}
	}
	if (sum >= 3) cout << "YES\n";
	else cout << "NO\n";
}
int main()
{
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
//     n = int(input())
//     s = input()
//     sum = 0
//     a = b = c = d = 1
//     for i in range(n):
//         if s[i].isupper():
//             if a:
//                 sum += 1
//             a = 0
//         elif s[i].islower():
//             if b:
//                 sum += 1
//             b = 0
//         elif s[i].isdigit():
//             if c:
//                 sum += 1
//             c = 0
//         elif d:
//             sum += 1
//             d = 0
//     if sum >= 3:
//         print("YES")
//     else:
//         print("NO")
