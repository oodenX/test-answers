#include <iostream>
#include <algorithm>
using namespace std;
int t, n, ans, a[105];
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        ans = 0;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        ans += a[n] - a[1];
        ans += a[n] - a[2];
        ans += a[n - 1] - a[1];
        ans += a[n - 1] - a[2];
        cout << ans << '\n';
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     n = int(input())
//     a = list(map(int, input().split()))
//     a.sort()
//     ans = 0
//     ans += a[-1] - a[0]
//     ans += a[-1] - a[1]
//     ans += a[-2] - a[0]
//     ans += a[-2] - a[1]
//     print(ans)
