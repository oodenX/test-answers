#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string a, b, l;
int ans;
int main () {
    cin >> a >> b;
    for (int i = 10000; i <= 99999; i++) {
        string s;
        l = to_string(i);
        for (int i = 0; i < 5; i++) s += l[i];
        for (int i = 4; i >= 0; i--) s += l[i];
        if (s >= a && s <= b) ans++;
        if (s > b) break;
    }
    cout << ans << '\n';
    return 0;
}

// python 代码
// a, b = input().split()
// ans = 0
// for i in range(10000, 100000):
//     s = str(i)
//     s += s[::-1]
//     if int(s) >= int(a) and int(s) <= int(b):
//         ans += 1
//     if int(s) > int(b):
//         break
// print(ans)
