#include <stdio.h>

int t, a, b, k;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &a, &b, &k);
        if (a > b && (a - b) % k == 0) printf("YES\n");
        else if (b > a && (b - a) % k == 0) printf("YES\n");
        else if (a == b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     a, b, k = map(int, input().split())
//     if a > b and (a - b) % k == 0:
//         print("YES")
//     elif b > a and (b - a) % k == 0:
//         print("YES")
//     elif a == b:
//         print("YES")
//     else:
//         print("NO")