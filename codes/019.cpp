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