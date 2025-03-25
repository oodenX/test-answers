#include <iostream>
#include <algorithm>
using namespace std;
int n, a[10], x[10], y[10], w[10];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = n; i >= 1; i--) {
        if (i == n) {
            w[i] = a[i - 1];
            x[i] = 1;
            y[i] = a[i];
        }
        else {
            w[i] = a[i - 1];
            x[i] = y[i + 1];
            y[i] = y[i + 1] * w[i + 1] + x[i + 1];
        }
    }
    if (n == 2) {
        y[1] = a[1] * a[2] + 1;
        x[1] = a[2];
    }
    int gcd = __gcd(x[1], y[1]);
    if (n == 1) cout << a[1] << ' ' << 1;
    else cout << y[1] / gcd << ' ' << x[1] / gcd << '\n';
    
    return 0;
}

// python 代码
// n = int(input())
// a = list(map(int, input().split()))
// x = [0] * 10
// y = [0] * 10
// w = [0] * 10
// for i in range(n, 0, -1):
//     if i == n:
//         w[i] = a[i - 1]
//         x[i] = 1
//         y[i] = a[i]
//     else:
//         w[i] = a[i - 1]
//         x[i] = y[i + 1]
//         y[i] = y[i + 1] * w[i + 1] + x[i + 1]
// if n == 2:
//     y[1] = a[1] * a[2] + 1
//     x[1] = a[2]
// gcd = math.gcd(x[1], y[1])
// if n == 1:
//     print(a[1], 1)
// else:
//     print(y[1] // gcd, x[1] // gcd)
