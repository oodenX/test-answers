#include<stdio.h>
#include<string.h>

char s[1005], y[1005];
int n, q[1005];
int main(){
    scanf("%d", &n);
    scanf("%s", s);
    int k = strlen(s);
    q[k]++;
    for(int i=0;i<k;i++) y[i] = s[i];
    
    for(int i = 1; i < n; i++) {
        scanf("%s", s);
        q[strlen(s)]++;
    }

    for(int i = 0; i < 1005; i++) {
        if(q[i] & 1) {
            printf("NO");
            return 0;
        }
    }

    for(int i = 0; i < k; i++) printf("%c", y[i]);

    return 0;
}

// python 代码
// n = int(input())
// s = input()
// q = [0] * 1005
// k = len(s)
// q[k] += 1
// y = s
// for _ in range(n - 1):
//     s = input()
//     q[len(s)] += 1
// for i in range(1005):
//     if q[i] % 2 == 1:
//         print("NO")
//         exit()
// print(y)
