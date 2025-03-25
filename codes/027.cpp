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

// python 代码
// n = int(input())
// a = list(map(int, input().split()))
// for i in range(n - 2, -1, -1):
//     a[i] += a[i + 1]
// temp = a[-1]
// for i in range(n - 2, -1, -1):
//     temp = min(a[i] // (n - i), temp)
// ans = 0
// for i in range(n - 1, -1, -1):
//     ans += a[i] - temp * (n - i)
// print(ans)
