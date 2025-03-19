#include <iostream>
using namespace std;
long long t, n, m;
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= m - n % m; i++) cout << n / m << ' ';
        for (int i = 1; i <= n % m; i++) cout << n / m + 1 << ' ';
        cout << '\n';
    }
    return 0;
}