#include <iostream>
using namespace std;
int k;
int main (){
    cin >> k;
    if(k % 2 == 0) cout << "ac";
    else if(k % 3 == 0) cout << "pe";
    else if(k % 5 == 0) cout << "re";
    else if(k % 7 == 0) cout << "wa";
    else cout << "gg";
    cout << '\n';

    return 0;
}

// python 代码
// k = int(input())
// if k % 2 == 0:
//     print("ac")
// elif k % 3 == 0:
//     print("pe")
// elif k % 5 == 0:
//     print("re")
// elif k % 7 == 0:
//     print("wa")
// else:
//     print("gg")