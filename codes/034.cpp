#include <iostream>
#include <algorithm>
using namespace std;
int t, n, a, b, c;
long long ans;
void solve() {
    cin >> a >> b >> c;
    a = a - (a / 2) * 2;
    b = b - (b / 2) * 2;
    c = c - (c / 2) * 2;
    if (a == 0 && b == 0 && c == 0) ans = 0;
    if (a == 0 && b == 0 && c == 1) ans = 1;
    if (a == 0 && b == 1 && c == 0) ans = 0;
    if (a == 0 && b == 1 && c == 1) ans = 1;
    if (a == 1 && b == 0 && c == 0) ans = 1;
    if (a == 1 && b == 0 && c == 1) ans = 0;
    if (a == 1 && b == 1 && c == 0) ans = 1;
    if (a == 1 && b == 1 && c == 1) ans = 0; 
    cout << ans << '\n';
}
int main() {
    cin >> t;
    while (t--) {
    solve();
    }
    
    return 0;
}