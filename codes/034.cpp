// #include <iostream>
// #include <algorithm>
// using namespace std;
// int t, n, a, b, c;
// long long ans;
// void solve() {
//     cin >> a >> b >> c;
//     a = a - (a / 2) * 2;
//     b = b - (b / 2) * 2;
//     c = c - (c / 2) * 2;
//     if (a == 0 && b == 0 && c == 0) ans = 0;
//     if (a == 0 && b == 0 && c == 1) ans = 1;
//     if (a == 0 && b == 1 && c == 0) ans = 0;
//     if (a == 0 && b == 1 && c == 1) ans = 1;
//     if (a == 1 && b == 0 && c == 0) ans = 1;
//     if (a == 1 && b == 0 && c == 1) ans = 0;
//     if (a == 1 && b == 1 && c == 0) ans = 1;
//     if (a == 1 && b == 1 && c == 1) ans = 0; 
//     cout << ans << '\n';
// }
// int main() {
//     cin >> t;
//     while (t--) {
//     solve();
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
long long a, b, c;
int t;
int main() {
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if ((a + 2 * b + 3 * c) % 2 == 0) cout << "0\n";
        else cout << "1\n";
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     a, b, c = map(int, input().split())
//     if (a + 2 * b + 3 * c) % 2 == 0:
//         print(0)
//     else:
//         print(1)
