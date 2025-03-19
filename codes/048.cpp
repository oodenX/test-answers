#include <iostream>
using namespace std;
int a, b, ans;
int main() {
    cin >> a >> b;
    ans = a < b ? a * a : b * b;
    cout << ans << '\n';
    return 0;
}

// python 代码
// a, b = map(int, input().split())
// print(min(a, b) ** 2)