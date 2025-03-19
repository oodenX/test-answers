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