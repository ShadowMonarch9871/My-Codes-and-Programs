#include<bits/stdc++.h>
// #include <iostream>
// #include<vector>
// #include<algorithm>
// #include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        map<int ,int>Map;
        // int j = 0;
        // int flag = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = 1; j < nums.size(); j++) {
        //         if (i == j)continue;
        //         else {
        //             if (nums[i] + nums[j] == target) {
        //                 result.push_back(i);
        //                 result.push_back(j);
        //                 flag = 1;

        //             }
        //         }
        //     }
        //     if (flag == 1)break;
        // }
        for (int i = 0; i < nums.size(); i++) {
            int remaining = target - nums[i];
            if (Map.find(remaining) != Map.end()) {
                return {Map[remaining], i};
            }
            else {
                Map[nums[i]] = i;

            }
        }
        return {};

    }
};

int main() {
    long long k;
    cin >> k;
    vector<int> v;
    int input;
    while (cin >> input) {
        v.push_back(input);
    }
    // vector<int>a = {1, 2, 3, 4, 6, 7};
    // vector<int>b = {2, 3, 5};

    Solution ans;

    vector<int> c = ans.twoSum(v, k);
    // cout << c;
    for (auto it : c) {
        cout << it << " ";
    }
    // cout << 8 % 5;
    return 0;
}