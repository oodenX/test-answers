#include <stdio.h>
int l, r;
int main() {
    scanf("%d%d", &l, &r);
    printf("%d\n", r - l + 1);
    return 0;
}

// python 代码
// l, r = map(int, input().split())
// print(r - l + 1)