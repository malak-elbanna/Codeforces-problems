#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minPositives = INT_MAX;
    int maxNegatives = INT_MIN;

    if (find(arr.begin(), arr.end(), 0) != arr.end()) {
        cout << 0 << endl;
    } else {
        for (int num : arr) {
            if (num > 0) {
                minPositives = min(minPositives, num);
            } else if (num < 0) {
                maxNegatives = max(maxNegatives, num);
            }
        }

        int stepsToZeroPositives = (minPositives != INT_MAX) ? minPositives : INT_MAX;
        int stepsToZeroNegatives = (maxNegatives != INT_MIN) ? abs(maxNegatives) : INT_MAX;

        int minStepsToZero = min(stepsToZeroPositives, stepsToZeroNegatives);

        cout << minStepsToZero << endl;
    }

    return 0;
}