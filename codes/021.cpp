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