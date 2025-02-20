#include <bits/stdc++.h>
using namespace std;
deque<int> q;
string s;
int n, x, cnt;
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

int main() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == '0') q.push_front(i);
        else q.push_back(i);
    }
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i]; 
    pair<int, int> p[n];
    while (q.size()) {
        p[cnt].first = arr[cnt];
        p[cnt].second = q.front();
        cnt++;
        q.pop_front();
    }
    sort(p, p + n, cmp);
    for (int i = 0; i < n; i++) cout << p[i].second << ' ';
    cout << '\n';

    return 0;
}