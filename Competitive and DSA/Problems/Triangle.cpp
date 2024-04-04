// #include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size());
        dp[0].push_back(triangle[0][0]);
        for (int i = 1; i < triangle.size(); i++) {
            dp[i].resize(triangle[i].size());
            for (int j = 0; j < triangle[i].size(); j++) {
                if (j == 0) {
                    dp[i][j] = dp[i - 1][j] + triangle[i][j];
                } 
                else if(j == triangle[i].size() - 1){
                    dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
                }
                else {
                    int sum1 = dp[i - 1][j - 1] + triangle[i][j];
                    int sum2 = dp[i - 1][j] + triangle[i][j];
                    dp[i][j] = min(sum1, sum2);
                }
            }
        } 
        return *min_element(dp.back().begin(), dp.back().end());
    }

};

int main() {
    long long k;
    vector<vector<int>> v;

    int input;
    while (std::cin >> input) {
        v.push_back({input});
        char nextChar = std::cin.peek();
        while (nextChar != '\n' && std::cin >> input) {
            v.back().push_back(input);
            nextChar = std::cin.peek();
        }
    }
    Solution ans;
    int c = ans.minimumTotal(v);
    cout << c;
    return 0;
} 
