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