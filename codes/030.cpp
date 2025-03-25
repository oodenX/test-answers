#include <iostream>
#include <algorithm>
using namespace std;
const int N = 3e5 + 5;
long long a[N], n, x, _, __, ans;
int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> _;
		__ = abs(_ - x);
        ans += a[__];
        a[_]++;
    }
    cout << ans << '\n';
    
    return 0;
}

// python 代码
// n, x = map(int, input().split())
// a = [0] * (3 * 10 ** 5 + 5)
// ans = 0
// for i in map(int, input().split()):
//     ans += a[abs(i - x)]
//     a[i] += 1
// print(ans)
