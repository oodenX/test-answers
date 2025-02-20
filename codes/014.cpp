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
