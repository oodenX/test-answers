#include<stdio.h>

int x, cnt;
int main(){
	scanf("%d", &x);
	while(x != 0) {
		if(x & 1) cnt++;
		x/=2;
	}
	printf("%d", cnt);
    return 0;
}