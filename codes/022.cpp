#include <stdio.h>
int n, m, sum, x;
int main() {
    scanf("%d%d", &n, &m);
    sum = ((n * m + 1) * n * m) / 2;
    for (int i = 0; i < n * m; i++) {
        scanf("%d", &x);
        sum -= x;
    }
    printf("%d\n", sum);
    
    return 0;
}
