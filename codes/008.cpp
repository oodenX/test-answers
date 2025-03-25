#include <iostream>
using namespace std;
long long x, h, n, m, v, l;
int t;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> t;
    while(t --) {
        cin >> x >> v >> l >> n >> m;
        if((n * m + l) * v >= x) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     x, v, l, n, m = map(int, input().split())
//     if (n * m + l) * v >= x:
//         print("YES")
//     else:
//         print("NO")
