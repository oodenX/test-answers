#include <stdio.h>
#include <string.h>
char c[20005];
int n;
int main() {
	scanf("%d", &n);
	while(n--) {
		scanf("%s", c);
		int m = strlen(c);
		bool flag = true;
		for(int i = 0; i < m; i++) {
			if(c[i] == '.') {
				for(int j = i + 1; j < m; j++) {
					if(c[j] != '0') {
						flag = false;
						break;
					}
				}
				break;
			}
		}
		if(flag) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}

// python 代码
// n = int(input())
// for _ in range(n):
//     s = input()
//     if s.count("0") == len(s) - 3:
//         print("YES")
//     else:
//         print("NO")