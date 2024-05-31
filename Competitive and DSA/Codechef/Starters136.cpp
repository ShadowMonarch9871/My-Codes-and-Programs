#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int largestEvenSumSubarraySize(std::vector<int>& arr) {
    int n = arr.size();
    int maxCount = 0;   
    int currentSum = 0; 
    for (int i = 0; i < n; ++i) {
        currentSum = 0; 

        for (int j = i; j < n; ++j) {
            currentSum += arr[j];

            if (currentSum % 2 == 0) {
                maxCount = std::max(maxCount, j - i + 1);
            }
        }
    }

    return maxCount;
}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        vector<int> s(size);
        for (int i = 0; i < size; i++) {
            cin >> s[i];
        }
        Solution sol;
        int subarraySize = sol.largestEvenSumSubarraySize(s);

        cout << subarraySize << endl;

    }

    return 0;
}
