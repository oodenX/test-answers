#include <iostream>
using namespace std;
string s;
int t;
int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        if (s.find("l") != string::npos && s.find("a") != string::npos && s.find("n") != string::npos) cout << "dao\n";
        else cout << "qwq\n";
    }
    return 0;
}

// python 代码
// t = int(input())
// for _ in range(t):
//     s = input()
//     if "l" in s and "a" in s and "n" in s:
//         print("dao")
//     else:
//         print("qwq")
