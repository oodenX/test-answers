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