#include <iostream>
#include <vector>
#include <algorithm>

struct Trap {
    int room;
    int time;
};

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<Trap> traps(n);

        for (int i = 0; i < n; i++) {
            std::cin >> traps[i].room >> traps[i].time;
        }

        std::sort(traps.begin(), traps.end(), [](const Trap& a, const Trap& b) {
            return a.room < b.room;
        });

        int max_k = 1;
        std::vector<int> dp(n + 1); // dp[i] stores the maximum room reached if i traps are activated

        for (int i = 1; i <= n; i++) {
            dp[i] = std::max(dp[i - 1], traps[i - 1].room - 1);

            for (int j = i - 2; j >= 0; j--) {
                if (traps[j].room + traps[j].time >= traps[i - 1].room) {
                    dp[i] = std::max(dp[i], dp[j] + traps[i - 1].room - traps[j].room);
                }
            }

            max_k = std::max(max_k, dp[i] + 1);
        }

        std::cout << max_k << std::endl;
    }

    return 0;
}