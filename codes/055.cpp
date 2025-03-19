#include <iostream>
using namespace std;
int t, n, ans;
string s, temp = "...";
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> s;
        ans = 0;
        if (s.find(temp) != string::npos) cout << "2\n";
        else {
            for (char c : s) {
                if (c == '.') ans++;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     n = int(input())
//     s = input()
//     if "..." in s:
//         print(2)
//     else:
//         print(s.count("0"))