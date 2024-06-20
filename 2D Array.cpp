#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int hourglassSum(vector<vector<int>>& arr) {
    int maxSum = INT_MIN;
    for (int i = 0; i <= 3; ++i) {
        for (int j = 0; j <= 3; ++j) {
            int currentSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
                          + arr[i + 1][j + 1]
                          + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    return maxSum;
}

int main() {
    vector<vector<int>> arr(6, vector<int>(6));
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            cin >> arr[i][j];
        }
    }
    cout << hourglassSum(arr) << endl;
    return 0;
}
