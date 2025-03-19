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