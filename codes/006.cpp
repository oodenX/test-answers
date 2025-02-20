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
