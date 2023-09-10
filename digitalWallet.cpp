#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> arrays(N, vector<int>(M));
    vector<int> maxValues(N, 0);

    // Read the arrays and update the maximum values for each array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arrays[i][j];
            maxValues[i] = max(maxValues[i], arrays[i][j]);
        }
    }

    // Sort the maxValues vector in descending order
    sort(maxValues.rbegin(), maxValues.rend());

    int result = 0;

    // Add the first K elements to the result
    for (int i = 0; i < K; i++) {
        result += maxValues[i];
    }

    cout << result << endl;

    return 0;
}