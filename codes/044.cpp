#include <iostream>
using namespace std;
const int N = 2e5 + 5;
int n, m, l, r, k;
long long a[N], b[N];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i] - a[i - 1];
    }
    while (m--) {
        cin >> l >> r >> k;
        b[l] += k;
        b[r + 1] -= k;
    }
    for (int i = 1; i <= n; i++) {
        a[i] = b[i] + a[i - 1];
        cout << a[i] << ' ';
    }
    return 0;
}

// python 代码
// n, m = map(int, input().split())
// a = list(map(int, input().split()))
// b = [0] * (n + 1)
// for i in range(1, n + 1):
//     b[i] = a[i] - a[i - 1]
// for _ in range(m):
//     l, r, k = map(int, input().split())
//     b[l] += k
//     b[r + 1] -= k
// for i in range(1, n + 1):
//     a[i] = b[i] + a[i - 1]
//     print(a[i], end=' ')
// print()
