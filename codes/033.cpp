#include <iostream>
using namespace std;
long long n, m;
int main () {
    cin >> n >> m;
    cout << (n * m * (n - 1) * (m - 1)) / 4 << '\n';
    return 0;
}

// python 代码
// n, m = map(int, input().split())
// print(n * m * (n - 1) * (m - 1) // 4)
