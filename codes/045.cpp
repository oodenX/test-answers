#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

// 定义矩阵类型
using Matrix = vector<vector<int>>;

// 矩阵操作函数
Matrix rotateClockwise(const Matrix& mat) {
    Matrix rotated(3, vector<int>(3));
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            rotated[j][2 - i] = mat[i][j];
    return rotated;
}

Matrix rotateAnticlockwise(const Matrix& mat) {
    Matrix rotated(3, vector<int>(3));
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            rotated[2 - j][i] = mat[i][j];
    return rotated;
}

Matrix flipHorizontal(const Matrix& mat) {
    Matrix flipped = mat;
    for (auto& row : flipped)
        reverse(row.begin(), row.end());
    return flipped;
}

Matrix flipVertical(const Matrix& mat) {
    Matrix flipped = mat;
    reverse(flipped.begin(), flipped.end());
    return flipped;
}

// BFS 求解最短路径
string solve(const Matrix& start, const Matrix& target) {
    queue<pair<Matrix, string>> q;
    set<Matrix> visited;

    q.push({start, ""});
    visited.insert(start);

    while (!q.empty()) {
        auto [current, path] = q.front();
        q.pop();

        if (path.length() > 108) continue;
        if (current == target) return path;

        vector<pair<string, Matrix>> operations = {
            {"A", rotateClockwise(current)},
            {"B", rotateAnticlockwise(current)},
            {"C", flipHorizontal(current)},
            {"D", flipVertical(current)}
        };

        for (const auto& [op, nextMatrix] : operations) {
            if (visited.find(nextMatrix) == visited.end()) {
                visited.insert(nextMatrix);
                q.push({nextMatrix, path + op});
            }
        }
    }

    return "are you joking?";
}

// 主函数
int main() {
    Matrix start(3, vector<int>(3));
    Matrix target(3, vector<int>(3));

    // 输入初始矩阵和目标矩阵
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> start[i][j];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> target[i][j];

    // 输出结果
    cout << solve(start, target) << endl;

    return 0;
}
