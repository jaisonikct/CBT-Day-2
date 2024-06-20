#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

vector<long long> summingSeries(int t, const vector<long long>& test_cases) {
    vector<long long> results;
    for (int i = 0; i < t; ++i) {
        long long n = test_cases[i];
        long long result = (n * n) % MOD;
        results.push_back(result);
    }
    return results;
}

int main() {
    int t;
    cin >> t;
    vector<long long> test_cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i];
    }
    
    vector<long long> results = summingSeries(t, test_cases);
    
    for (long long result : results) {
        cout << result << endl;
    }
    
    return 0;
}
