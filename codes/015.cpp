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