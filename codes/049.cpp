#include <iostream>
using namespace std;
const int N = 1e6 + 5;
int n, k, l, r, sum, ans, diff[N];
int main() {
    cin >> n >> k;
    while (k--) {
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }
    for (int i = 1; i <= n; i++) {
        sum += diff[i];
        if (sum % 2 == 0) ans++;
    }
    cout << ans << '\n';
    return 0;
}