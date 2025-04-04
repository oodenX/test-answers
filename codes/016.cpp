#include <stdio.h>

int x, n;
int main() {
    scanf("%d%d", &n, &x);
    long long s[n], sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &s[i]);
        sum += s[i];
    }
    if (x == 0) printf("%lld", sum);
    else
        for (int i = 0; i < n - 1; i++) {
            int t = s[i] % x;
            s[i + 1] += t;
        }
    long long h = s[n - 1] % x;
    printf("%lld\n", h);

    return 0;
}

// python 代码
// n, x = map(int, input().split())
// s = list(map(int, input().split()))
// sum = 0
// for i in s:
//     sum += i
// if x == 0:
//     print(sum)
// else:
//     for i in range(n - 1):
//         t = s[i] % x
//         s[i + 1] += t
//     h = s[n - 1] % x
//     print(h)
