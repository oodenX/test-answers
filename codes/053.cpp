#include <iostream>
#include <algorithm>
using namespace std;
int n, a[100005], pos, maxn;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxn = max(maxn, a[i]);
        if (a[i] == maxn) pos = i;
    }
    cout << maxn << '\n' << pos << '\n';
    return 0;
}

// python 代码
// n = int(input())
// a = list(map(int, input().split()))
// maxn = max(a)
// pos = a.index(maxn) + 1
// print(maxn)
// print(pos)
