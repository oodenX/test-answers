#include <iostream>
using namespace std;
int n, a[1005], pre[1005], ans, i, j, k, q;
const int MOD = 3344;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)  {
        cin >> a[i];
        for (int j = 1; j < i; j++) if (a[j] < a[i]) pre[i]++;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int x = n - j - a[j] + 1 + pre[j];
            if (a[j] > a[i] && pre[i] && x) ans += (pre[i] * x) % MOD;
            ans %= MOD;
        }
    }
    cout << ans << '\n';
    return 0;
}

// python 代码
// n = int(input())
// a = list(map(int, input().split()))
// pre = [0] * 1005
// ans = 0
// for i in range(1, n + 1):
//     for j in range(1, i):
//         if a[j] < a[i]:
//             pre[i] += 1
// for i in range(1, n + 1):
//     for j in range(i + 1, n + 1):
//         x = n - j - a[j] + 1 + pre[j]
//         if a[j] > a[i] and pre[i] and x:
//             ans += (pre[i] * x) % 3344
//         ans %= 3344
// print(ans)
