#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n;
struct stu {
    string a;
    double b, c;
};
bool cmp1(stu a1, stu a2)  {
    return a1.b > a2.b;
}
bool cmp2(stu b1, stu b2) {
    return b1.c < b2.c;
}
int main() {   
    cin >> n;
    stu arr[n];
    
    for (int i = 0; i < n; i++) cin >> arr[i].a >> arr[i].b >> arr[i].c;
    sort(arr, arr + n, cmp1);
    cout << arr[2].a << ' ';

    sort(arr, arr + n, cmp2);
    cout << arr[2].a << '\n';

    return 0;
}