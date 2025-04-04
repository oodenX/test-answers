#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n, k, t;
string s;
void solve() {
    int sum1 = 0, ans;
    cin >> n >> k;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') sum1++;
    }
    int sum0 = n - sum1;
    int M = max(sum1, sum0), N = min(sum1, sum0);
    if (M == N) {
        if (k <= M) ans = 2 * k;
        else  {
            if (k % 2) ans = n - 1;
            else ans = n;
        }
    }
    else {
        if (k <= N) ans = M - N + 2 * k;
        else if (k > N && k < M) {
            if ((k - N) % 2 == 0) ans = n;
            else if ((k - N) % 2 == 1) ans = n - 1;
        }
        else {
            if ((k - M) % 2 == 0 || (k - N) % 2 == 0) ans = n;
            else ans = n - 1;
        }
    }
    cout << ans << '\n';
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     n, k = map(int, input().split())
//     s = input()
//     sum1 = s.count("0")
//     sum0 = n - sum1
//     M = max(sum1, sum0)
//     N = min(sum1, sum0)
//     if M == N:
//         if k <= M:
//             print(2 * k)
//         else:
//             if k % 2:
//                 print(n - 1)
//             else:
//                 print(n)
//     else:
//         if k <= N:
//             print(M - N + 2 * k)
//         elif k > N and k < M:
//             if (k - N) % 2 == 0:
//                 print(n)
//             elif (k - N) % 2 == 1:
//                 print(n - 1)
//         else:
//             if (k - M) % 2 == 0 or (k - N) % 2 == 0:
//                 print(n)
//             else:
//                 print(n - 1)