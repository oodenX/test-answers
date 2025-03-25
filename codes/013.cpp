#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
const int MOD = 998244353;
int t, n, a[5];
string s;
void solve() {
    memset(a, 0, sizeof(a));
    int ans = MOD + 1;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        switch (s[i]) {
        case 'F':
            a[1]++;
            break;
        case 'B':
            a[2]++;
            break;
        case 'L':
            a[3]++;
            break;
        case 'R':
            a[4]++;
            break;
        default:
            break;
        }
    }
    int b[5];
    b[1] = (a[2] * 2 + a[3] + a[4]) % MOD;
    b[2] = (a[1] * 2 + a[3] + a[4]) % MOD;
    b[3] = (a[1] + a[2] + a[4] * 2) % MOD;
    b[4] = (a[1] + a[2] + a[3] * 2) % MOD;
    for (int i  = 1; i <= 4; i++) ans = min(b[i], ans);
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
//     n = int(input())
//     s = input()
//     a = [0] * 5
//     ans = 998244354
//     for i in range(n):
//         if s[i] == "F":
//             a[1] += 1
//         elif s[i] == "B":
//             a[2] += 1
//         elif s[i] == "L":
//             a[3] += 1
//         elif s[i] == "R":
//             a[4] += 1
//     b = [0] * 5
//     b[1] = (a[2] * 2 + a[3] + a[4]) % 998244353
//     b[2] = (a[1] * 2 + a[3] + a[4]) % 998244353
//     b[3] = (a[1] + a[2] + a[4] * 2) % 998244353
//     b[4] = (a[1] + a[2] + a[3] * 2) % 998244353
//     for i in range(1, 5):
//         ans = min(b[i], ans)
//     print(ans)
