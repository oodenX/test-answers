#include <iostream>
#include <string>
using namespace std;
int n, ans;
string s;
string goal = "swust";
int main() {
    cin >> n >> s;
    for (int i = 0; i < n - 4; i++) 
        if (s[i] == 's' && s[i + 1] == 'w' && s[i + 2] == 'u' && s[i + 3] == 's' && s[i + 4] == 't') ans++;
    cout << ans << '\n';
    
    return 0;
}


//  python 代码
//  n=input()
//  s=input()
//  print(s.count("swust"))