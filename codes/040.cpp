#include <iostream>
#include <string>
using namespace std;
string s;
int t;
void solve() {
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans = ans * 10 + s[i] - '0';
        ans %= 7;
    }
    if (ans & 1) cout << "lmly\n";
    else cout << "tzz\n";
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}