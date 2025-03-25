#include <bits/stdc++.h>
using namespace std;

// 八卦与五行对应关系：
// 乾(1)和兑(2)对应金(0)，震(4)和巽(5)对应木(2)，坎(6)对应水(1)，
// 离(3)对应火(3)，艮(7)和坤(0)对应土(4)
map<int, int> relation = {{1, 0}, {2, 0}, {4, 2}, {5, 2}, {6, 1}, {3, 3}, {7, 4}, {0, 4}};

// 计算年号
int year(int y) {
    int x = (y - 3) % 12;
    if (x == 0)
        x = 12;
    return x;
}

// 计算时辰号
int chen(int hour) {
    int x = hour / 2 + (hour % 2) + 1;
    if (x == 13)
        x = 1;
    return x;
}

int main(void) {
    // a:年, b:月, c:日, d:时, e:分
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    
    // 计算年号和时辰号
    a = year(a);
    d = chen(d);
    
    // 计算上下卦
    int up = (a + b + c) % 8;       // 上卦
    int down = (a + b + c + d) % 8; // 下卦
    
    // 获取上下卦对应的五行
    int upxing = relation[up];     // 上卦对应的五行
    int downxing = relation[down]; // 下卦对应的五行
    
    // 判断五行关系
    if ((upxing + 1) % 5 == downxing || (downxing + 1) % 5 == upxing) cout << "haoye"; // 五行相生
    else if (upxing == downxing) cout << "emm";   // 五行相同
    else cout << "gg";    // 五行相克
        
    return 0;
}

// python 代码
// a, b, c, d, e = map(int, input().split())
// a = (a - 3) % 12
// if a == 0:
//     a = 12
// d = d // 2 + d % 2 + 1
// if d == 13:
//     d = 1
// up = (a + b + c) % 8
// down = (a + b + c + d) % 8
// upxing = {1: 0, 2: 0, 4: 2, 5: 2, 6: 1, 3: 3, 7: 4, 0: 4}[up]
// downxing = {1: 0, 2: 0, 4: 2, 5: 2, 6: 1, 3: 3, 7: 4, 0: 4}[down]
// if (upxing + 1) % 5 == downxing or (downxing + 1) % 5 == upxing:
//     print("haoye")
// elif upxing == downxing:
//     print("emm")
// else:
//     print("gg")
