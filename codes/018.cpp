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

// python 代码
// n = int(input())
// cnt = 0
// for a in range(1, n + 1):
//     for b in range(1, n + 1):
//         for c in range(1, n + 1):
//             if a * a + b * b == c * c:
//                 cnt += 1
// print(cnt // 2)
