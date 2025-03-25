#include <bits/stdc++.h>
using namespace std;
int t, n;
int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        long long prices[n];
        for (int i = 0; i < n; i++) cin >> prices[i];
        
        long long profit = 0;

        for (int i = 1; i < n; i++) {
            int tmp = prices[i] - prices[i - 1];
            if (tmp > 0) profit += tmp;
        }
        cout << profit << '\n';
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     n = int(input())
//     prices = list(map(int, input().split()))
//     profit = 0
//     for i in range(1, n):
//         tmp = prices[i] - prices[i - 1]
//         if tmp > 0:
//             profit += tmp
//     print(profit)

