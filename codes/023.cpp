#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int inf = 0x3f3f3f3f;
int n, m, t, k;
double dis(double X1, double Y1, double X2, double Y2) {
    return sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));
}
void solve() {
    double a, b, r, xa, ya, xb, yb, xc, yc;
    cin >> a >> b >> r >> xa >> ya >> xb >> yb >> xc >> yc;
    double l = 2 * r, d[3];
    d[0] = dis(xa, ya, xb, yb), d[1] = dis(xa, ya, xc, yc), d[2] = dis(xb, yb, xc, yc);
    for (int i = 0; i < 3; i++) {
        if (d[i] >= l) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     a, b, r = map(int, input().split())
//     xa, ya = map(int, input().split())
//     xb, yb = map(int, input().split())
//     xc, yc = map(int, input().split())
//     l = 2 * r
//     d = [((xa - xb) ** 2 + (ya - yb) ** 2) ** 0.5, ((xa - xc) ** 2 + (ya - yc) ** 2) ** 0.5, ((xb - xc) ** 2 + (yb - yc) ** 2) ** 0.5]
//     for i in range(3):
//         if d[i] >= l:
//             print("YES")
//             break
//     else:
//         print("NO")