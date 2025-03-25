#include<stdio.h>

long long s, k, n;
int t, a[10005];
int main() {
    scanf("%d", &t);
    while(t--) {
    scanf("%lld%lld%lld", &s, &k, &n);
    if (k == 0) printf("0\n");
    else {
        long long op = n / k;
        if(op>=s) printf("%lld\n", s * k);            
            else printf("%lld\n",n);
        }
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     s, k, n = map(int, input().split())
//     if k == 0:
//         print(0)
//     else:
//         op = n // k
//         if op >= s:
//             print(s * k)
//         else:
//             print(n)
