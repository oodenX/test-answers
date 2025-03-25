#include <stdio.h>

int n, x, y, sum;
int main () {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d%d", &x, &y);    
        int temp = sum - y;
        if(temp > 0) sum = temp + x;
        else sum = x;
    if(i == n) printf("%d", sum);
    }
    
    return 0;
}

// python 代码
// n = int(input())
// sum = 0
// for i in range(n):
//     x, y = map(int, input().split())
//     temp = sum - y
//     if temp > 0:
//         sum = temp + x
//     else:
//         sum = x
//     if i == n - 1:
//         print(sum)
