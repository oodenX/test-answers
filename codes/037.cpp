#include <iostream>
#include <string>
using namespace std;
int n, m, cnt = 1, i, a[1005];
bool p = false;
string s;
int main() {
    cin >> n >> m;
    cin >> s;
    while (a[cnt] <= a[cnt - 1]) {
        if (i >= n) break;
        a[cnt] = a[cnt] * 10 + (int)(s[i] - '0');
        i++;
        if (a[cnt] > a[cnt - 1]) cnt++;
    }
    if (cnt - 1 >= m) p = true;
    if (p) cout << "miaomiao\n";
    else cout << "wangwang\n";

    return 0;
}

// python 代码
// n, m = map(int, input().split())
// s = input()
// a = [0] * 1005
// cnt = 1
// i = 0
// p = False
// while a[cnt] <= a[cnt - 1]:
//     if i >= n:
//         break
//     a[cnt] = a[cnt] * 10 + int(s[i])
//     i += 1
//     if a[cnt] > a[cnt - 1]:
//         cnt += 1
// if cnt - 1 >= m:
//     p = True
// if p:
//     print("miaomiao")
// else:
//     print("wangwang")
