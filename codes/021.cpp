#include <iostream>
#include <string>
using namespace std;
string s, goal = "vivalarevolt";
bool p = false;
int cnt;
int main() {
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == goal[cnt]) cnt++;
		if (cnt == goal.size()) {
			p = true;
			break;
		}
	}
	if (p) cout << "Y estamos furiosos";
	else cout << "La revolt y victoria";
	return 0;
}

// python 代码
// s = input()
// goal = "vivalarevolt"
// cnt = 0
// for i in s:
//     if i == goal[cnt]:
//         cnt += 1
//     if cnt == len(goal):
//         print("Y estamos furiosos")
//         break
// if cnt != len(goal):
//     print("La revolt y victoria")
