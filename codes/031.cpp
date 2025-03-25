#include <iostream>
#include <cmath>
#define LL long long
using namespace std;
LL n, ans;
const LL N = 20230415;
int main() {   
    cin >> n;
    if (n <= N) ans = N + 1 - n;
    else ans = 0;
    cout << ans << '\n';    
    return 0;
}

// python 代码
// n = int(input())
// if n <= 20230415:
//     print(20230415 + 1 - n)
// else:
//     print(0)
