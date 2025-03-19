#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

// 使用整数数组表示3x3矩阵
struct State {
    int mat[3][3];
    string ops;
    
    // 矩阵比较
    bool operator==(const State& other) const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (mat[i][j] != other.mat[i][j]) return false;
            }
        }
        return true;
    }
};

// 哈希函数
struct StateHash {
    size_t operator()(const State& s) const {
        string key;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                key += to_string(s.mat[i][j]) + ",";
            }
        }
        return hash<string>()(key);
    }
};

// 操作A：顺时针旋转90度
State rotateClockwise(const State& s) {
    State next = {{{0}}, s.ops + "A"};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            next.mat[j][2-i] = s.mat[i][j];
        }
    }
    return next;
}

// 操作B：逆时针旋转90度
State rotateCounterClockwise(const State& s) {
    State next = {{{0}}, s.ops + "B"};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            next.mat[2-j][i] = s.mat[i][j];
        }
    }
    return next;
}

// 操作C：左右翻转
State flipLeftRight(const State& s) {
    State next = s;
    next.ops += "C";
    for (int i = 0; i < 3; i++) {
        swap(next.mat[i][0], next.mat[i][2]);
    }
    return next;
}

// 操作D：上下翻转
State flipUpDown(const State& s) {
    State next = s;
    next.ops += "D";
    for (int j = 0; j < 3; j++) {
        swap(next.mat[0][j], next.mat[2][j]);
    }
    return next;
}

int main() {
    State start, target;
    
    // 输入初始矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> start.mat[i][j];
        }
    }
    
    // 输入目标矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> target.mat[i][j];
        }
    }
    
    // 如果初始即为目标
    if (start == target) {
        cout << "" << endl;
        return 0;
    }
    
    // BFS查找最短操作序列
    queue<State> q;
    unordered_set<State, StateHash> visited;
    
    q.push(start);
    visited.insert(start);
    
    while (!q.empty()) {
        State curr = q.front();
        q.pop();
        
        // 尝试四种操作，按字典序
        State nextStates[] = {
            rotateClockwise(curr),          // A
            rotateCounterClockwise(curr),   // B
            flipLeftRight(curr),            // C
            flipUpDown(curr)                // D
        };
        
        for (const auto& next : nextStates) {
            if (next == target) {
                cout << next.ops << '\n';
                return 0;
            }
            
            if (visited.find(next) == visited.end()) {
                visited.insert(next);
                q.push(next);
            }
        }
    }
    
    cout << "are you joking?" << '\n';
    return 0;
}