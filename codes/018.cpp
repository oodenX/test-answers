#include <stdio.h>
#include <math.h>

int n, cnt;
int main() {
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            for (int c = 1; c <= n; c++)
                if (a * a + b * b == c * c)
                    cnt++;
    printf("%d", cnt / 2);

    return 0;
}