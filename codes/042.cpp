#include <iostream>
#include <vector>
#include <string>
using namespace std;
// a[玩家][点数] = 该点数的牌的数量
// 三名玩家的手牌，下标从1开始，0表示未使用
// sum记录每个玩家的剩余牌数
int n, a[4][14], sum[4];
int main() {
    cin >> n;
    // 读取每个玩家的手牌
    for (int player = 1; player <= 3; player++) {
        sum[player] = n; // 初始每名玩家有n张牌
        for (int j = 0; j < n; j++) {
            int card;
            cin >> card;
            a[player][card]++; // 统计每种点数的牌有多少张
        }
    }
    
    // last[1]: 上一轮出的牌的点数
    // last[2]: 上一轮出的牌的张数
    // last[3]: 上一轮出牌的玩家
    int last[4] = {0, 0, 0, 0};
    int i = 1; // 从第一个玩家开始
    while (1) {
        int tmp = 0; // 标记是否成功出牌
        int who = (i - 1) % 3 + 1; // 当前玩家编号(1,2,3)
        
        // 如果轮到上一个出牌的玩家，说明开始新的回合
        if (last[3] == who) {
            last[1] = 0;  // 重置点数
            last[2] = 0;  // 重置张数，初始为0表示可以出任意牌
        }
        
        // 尝试出牌：遍历所有可能的牌数增加量
        for (int j = 0; j <= sum[who]; j++) {
            // 遍历所有点数
            for (int k = 1; k <= 13; k++) {
                // 如果没有增加牌数(j=0)且点数不大于上一次，则跳过
                if (j == 0 && k <= last[1]) continue;
                
                // 计算需要出的牌数：上一轮出的牌的张数+增加量
                int cardsToPlay = j;
                if (last[2] > 0) {
                    cardsToPlay += last[2];
                } else {
                    cardsToPlay = 1; // 新回合先出一张
                }
                
                // 如果手中有足够的牌可以出
                if (a[who][k] >= cardsToPlay) {
                    sum[who] -= cardsToPlay;      // 减少手牌数量
                    tmp = 1;                      // 标记成功出牌
                    last[1] = k;                  // 记录点数
                    last[2] = cardsToPlay;        // 记录张数
                    last[3] = who;                // 记录出牌玩家
                    a[who][k] -= cardsToPlay;     // 减少该点数的牌
                    
                    // 检查是否赢了
                    if (sum[who] == 0) {
                        if (who == 1) {
                            cout << "LBY";
                        } else if (who == 2) {
                            cout << "HXC";
                        } else if (who == 3) {
                            cout << "WZY";
                        }
                        return 0;
                    }
                    break;
                }
            }
            if (tmp) break; // 如果已经成功出牌，不再尝试更多牌
        }
        // 进入下一轮
        i++;
    }
    return 0;
}