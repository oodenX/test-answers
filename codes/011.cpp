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