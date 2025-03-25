#include <iostream>
#include <cmath>
using namespace std;
double a[105][105], b[105][105];
int n, m, i, j;
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
    for (int i = 2; i < n; i++)
        for (int j = 2; j < m; j++) 
            b[i][j] = floor((a[i + 1][j] + a[i - 1][j] + a[i][j - 1]
             + a[i][j + 1] + a[i][j] + a[i - 1][j - 1]
              + a[i - 1][j + 1] + a[i + 1][j + 1] + a[i + 1][j - 1])
               * 1.0 / 9);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cout << b[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}

// python 代码
// n, m = map(int, input().split())
// a = [[0] * 105 for _ in range(105)]
// b = [[0] * 105 for _ in range(105)]
// for i in range(1, n + 1):
//     a[i] = list(map(int, input().split()))
//     b[i] = a[i][:]
// for i in range(2, n):
//     for j in range(2, m):
//         b[i][j] = int((a[i + 1][j] + a[i - 1][j] + a[i][j - 1] + a[i][j + 1] + a[i][j] + a[i - 1][j - 1] + a[i - 1][j + 1] + a[i + 1][j + 1] + a[i + 1][j - 1]) / 9)
// for i in range(1, n + 1):
//     for j in range(1, m + 1):
//         print(b[i][j], end=' ')
//     print()
