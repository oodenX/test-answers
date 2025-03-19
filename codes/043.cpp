#include <iostream>
#include <map>
#define int long long
using namespace std;
int n, x, t, ans;
signed main() {
    cin >> t;
    while (t--) {
        ans = 0;
        map<int, int> mp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            x %= 60;
            ans += mp[(60 - x) % 60];
            mp[x]++;
        }
        cout << ans << '\n';
    }
    return 0;
}