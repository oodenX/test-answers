#include <iostream>
using namespace std;
int n, t, a[1005];
int main() {
    cin >> n >> t;
    if (n % t) {
        cout << "y\n";
        if (n > t) cout << (n / t + 1) * t % n << '\n';
        else cout << t - n << '\n';
    }
    else cout << "n\n";
    return 0;
}