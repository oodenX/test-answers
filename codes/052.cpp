#include <iostream>
#include <algorithm>
using namespace std;
int t, n, ans, a[105];
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        ans = 0;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        ans += a[n] - a[1];
        ans += a[n] - a[2];
        ans += a[n - 1] - a[1];
        ans += a[n - 1] - a[2];
        cout << ans << '\n';
    }
    return 0;
}