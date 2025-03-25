#include <iostream>
#include <algorithm>
using namespace std;
struct Box {
    int m, x, y;
};
bool cmp(Box a, Box b) {
    if (a.x != b.x) return a.x < b.x;
    return a.y > b.y;
}
int n;
Box box[105];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> box[i].m >> box[i].x >> box[i].y;
    sort(box, box + n, cmp);
    for (int i = 0; i < n; i++) cout << box[i].m << ' ';
    return 0;
}

// python 代码
// n = int(input())
// box = []
// for _ in range(n):
//     m, x, y = map(int, input().split())
//     box.append((m, x, y))
// box.sort(key=lambda x: (x[1], -x[2]))
// print(*[i[0] for i in box])
