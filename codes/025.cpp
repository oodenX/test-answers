#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int inf = 0x3f3f3f3f;
int n, m, t, k;
pair<int, int> p[31], q[3005];
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first > b.first;
    }
    else return a.second > b.second;
}

void solve() {
    cin >> n >> k;
    p[30].second = 1, p[29].second = 2;
    for (int i = 28; i >= 1; i--) {
        p[i].second = p[i + 1].second << 1;
    }
    for (int i = 1; i <= k; i++) cin >> p[i].first;
    for (int i = 1; i <= n; i++) {
        cin >> q[i].first;
        for (int j = 1; j <= k; j++) {
            if (q[i].first % p[j].first == 0) {
                q[i].second += p[j].second;
            }
        }
    }
    sort(q + 1, q + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        cout << q[i].first << ' ';
    }
    cout << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}

// python 代码
// n, k = map(int, input().split())
// p = [(0, 1), (0, 2)]
// for i in range(28, 0, -1):
//     p.append((0, p[-1][1] << 1))
// for i in range(1, k + 1):
//     p[i] = (int(input()), p[i][1])
// q = [(int(input()), 0) for _ in range(n)]
// for i in range(n):
//     for j in range(1, k + 1):
//         if q[i][0] % p[j][0] == 0:
//             q[i] = (q[i][0], q[i][1] + p[j][1])
// q.sort(key=lambda x: (-x[1], x[0]))
// print(*[i[0] for i in q])
