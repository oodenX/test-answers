#include <iostream>
#include <algorithm>
#define LL long long
using namespace std;
const int N = 1e5 + 5;
LL a[N], ans;
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    
    for (int i = n - 1; i >= 1; i--) a[i] += a[i + 1];
    
    LL temp = a[n];
    
    for (int i = n - 1; i >= 1; i--) temp = min((a[i] / (n - i + 1)), temp);
    
    for (int i = n; i >= 1; i--) ans = ans + a[i] - temp * (n + 1 - i);
    
    cout << ans << '\n';

    return 0;
}