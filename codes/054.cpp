#include <iostream>
using namespace std;
long long t, n, m;
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= m - n % m; i++) cout << n / m << ' ';
        for (int i = 1; i <= n % m; i++) cout << n / m + 1 << ' ';
        cout << '\n';
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     n, m = map(int, input().split())
//     for i in range(1, m - n % m + 1):
//         print(n // m, end=' ')
//     for i in range(1, n % m + 1):
//         print(n // m + 1, end=' ')
//     print()
