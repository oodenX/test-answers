#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    int a[n], b[n], max1 = -1, max2 = -1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max1) max1 = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == max1) cnt++;
        if (a[i] > max2 && a[i] != max1) max2 = a[i];
    }
    if (cnt >= 2) {
        for (int i = 0; i < n; i++) printf("%d ", max1);
    }
    else {
        for (int i = 0; i < n; i++) {
            if (a[i] != max1) printf("%d ", max1);
            else printf("%d ", max2);
        }
    }
    return 0;
}