#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int n, m, t;
void solve() {
    int ans = 0, x, sum = 0, minn = 105;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            ans += abs(x);
            minn = min(minn, abs(x));
            if (x < 0) sum++;
        }
    }    
    if (sum & 1) ans = ans - minn - minn;
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
//     n, m = map(int, input().split())
//     ans = 0
//     sum = 0
//     minn = 105
//     for i in range(n):
//         for j in range(m):
//             x = int(input())
//             ans += abs(x)
//             minn = min(minn, abs(x))
//             if x < 0:
//                 sum += 1
//     if sum & 1:
//         ans = ans - minn - minn
//     print(ans)
