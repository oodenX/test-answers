#include <stdio.h>

long long x, cnt;
int t;
int main() {
    scanf("%d", &t);
    while (t--) {
        cnt = 0;
        scanf("%lld", &x);
        while (x) {
            if (x | 0) cnt++;
            x /= 2;
        }
        printf("%lld\n", cnt);
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     x = int(input())
//     print(bin(x).count("1"))
