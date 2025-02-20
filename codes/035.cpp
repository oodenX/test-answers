#include <iostream> // 钓鱼题，ac的可以联系作者
using namespace std;
int a, b, c, d, e;
bool mp[6][6];
int main() {
    mp[4][5] = mp[5][4] = mp[1][5] = mp[5][1] = mp[1][3] = mp[3][1] = mp[2][3] = mp[3][2] = mp[2][5] = mp[5][2] = 1;
    cin >> a >> b >> c >> d >> e;
    if ((a - 3) % 12 == 0) a = 12;
    else a = (a - 3) % 12;
    int t = d * 60 + e;
    int s;
    if (t >= 23 * 60 || t < 60) s = 1;
    else for (int i = 1; i < 12; i++) {
        if (t >= (2 * i - 1) * 60 && t < 60 * (2 * i + 1)) s = i + 1;
    }
    int up, down;
    up = (a + b + c) % 8;
    down = (a + b + c + s) % 8;
    int p, q;
    if (up == 1 || up == 2) p = 1;
    else if (up == 4 || up == 5) p = 2;
    else if (up == 6) p = 3;
    else if (up == 3) p = 4;
    else p = 5;
    if (down == 1 || down == 2) q = 1;
    else if (down == 4 ||down == 5) q = 2;
    else if (down == 6) q = 3;
    else if (down == 3) q = 4;
    else q = 5;
    if (p == q) cout << "emm\n";
    else if (mp[p][q]) cout << "haoye\n";
    else cout << "gg\n";

    return 0;
}