#include<stdio.h>

int n;
int main() {
    scanf("%d",&n);    
    int a[n];
    int max = -1;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (a[i] > max) max = a[i];
    }
    int ans = max - 25;
    if (ans < 0) ans = 0;
    printf("%d", ans);
}

