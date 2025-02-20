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