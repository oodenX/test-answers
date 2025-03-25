#include <iostream>
using namespace std;
const int N = 1e6 + 5;
int n, k, l, r, sum, ans, diff[N];
int main() {
    cin >> n >> k;
    while (k--) {
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }
    for (int i = 1; i <= n; i++) {
        sum += diff[i];
        if (sum % 2 == 0) ans++;
    }
    cout << ans << '\n';
    return 0;
}

// python 代码
// n, k = map(int, input().split())
// diff = [0] * (n + 1)
// for _ in range(k):
//     l, r = map(int, input().split())
//     diff[l] += 1
//     diff[r + 1] -= 1
// sum = 0
// ans = 0
// for i in range(1, n + 1):
//     sum += diff[i]
//     if sum % 2 == 0:
//         ans += 1
// print(ans)
