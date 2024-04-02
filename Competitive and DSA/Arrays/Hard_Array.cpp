#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        // for (int i = 0; i < numRows; i++) {
        //     ans[i].resize(i + 1, 0);
        //     for (int j = 0; j <= i; j++) {
        //         ans[i][0] = 1;
        //         ans[i][i] = 1;
        //         if (i >=2&&(j>=1&&j<=i-1)) {
        //             ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        //         }
        //     }
        // }
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(GenerateRow(i));
        }
        return ans;

    }
    vector<int>GenerateRow(int Rownumber) {
        vector<int>Row(Rownumber, 1);
        long long ans = 1;
        for (int i = 1; i < Rownumber - 1; i++) {
            ans = ans * (Rownumber - i);
            ans = ans / (i);
            Row[i] = ans;
        }
        return Row;
    }
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int>Hash;
        int limit = nums.size() / 3;
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++) {
            if (Hash.find(nums[i]) == Hash.end()) {
                Hash[nums[i]] = 1;
            }
            else {
                Hash[nums[i]]++;
            }

        }
        for (auto it : Hash) {
            if (it.second > limit) {
                ans.emplace_back(it.first);
            }
        }
        return ans;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Brute force approach - Use three loops for i,j and k(three pointer approach) store sum in a set(for unique values) and store set values in ans vector.


        //Better approach - Use hashing i.e. sum=nums[i]+nums[j]; look for -(sum) int the set. If it exists then there could be a triplet return it. If don't exist store the nums[j] value in the set. Empty the hash set for every i increment so that there exists one solution for every num[i]


        //Optimal approach

        vector<vector<int>>ans;
       
        sort(nums.begin(), nums.end());
        for (i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            j = i + 1;
            k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                }
                else if (sum > 0) {
                    k--;
                }
                else {
                    vector<int>temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k++;

                }
            }

        }
        return ans;
    }
};

int main() {
    // long long k;
    // cin >> k;
    vector<int> v;


    int input;
    // cin >> input;
    while (cin >> input) {
        v.push_back(input);
    }
    // int k = 3;;

    // int input;
    // while (std::cin >> input) {
    //     v.push_back({input});
    //     char nextChar = std::cin.peek();
    //     while (nextChar != '\n' && std::cin >> input) {
    //         v.back().push_back(input);
    //         nextChar = std::cin.peek();
    //     }
    // }
    // vector<int>a = {1, 2, 3, 4, 6, 7};
    // vector<int>b = {2, 3, 5};

    Solution ans;
    vector<int> sol;
    sol = ans.threeSum(v);
    // cout << sol;
    // cout << sol.size();
    for (auto it : sol) {
        // for (auto it1 : it) {
        //     cout << it1 << " ";
        // }
        cout << it << " ";
        // cout << endl;
    }
    // cout << 8 % 5;
    // for (auto it : sol) {
    //     cout << it << " ";
    // }
    return 0;
}