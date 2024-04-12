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
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
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
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }
        return ans;
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //Brute force approach - Use four loops to find all possible quartuplets and then find the reqiered ones.
        //Better approach - Find three sum using three loops then look for target - sum in the vector if found good otherwise enter it in a hashset.
        // int size = nums.size();
        // set<vector<int>>st;
        // for (int i = 0; i < size; i++) {
        //     for (int j = i + 1; j < size; j++) {
        //         set<long long>hashset;
        //         for (int k = j + 1; k < size; k++) {
        //             long long sum = nums[i] + nums[j];
        //             sum+=nums[k];
        //             if (hashset.find(target - sum) != hashset.end()) {
        //                 vector<int>temp = {nums[i], nums[j], nums[k], (int)(target - sum)};
        //                 sort(temp.begin(), temp.end());
        //                 st.insert(temp);
        //             }
        //             hashset.insert(nums[k]);
        //         }
        //     }
        // }
        // vector<vector<int>>ans(st.begin(), st.end());


        // return ans;

        //Optimal approach - Same as three sum. Have four pointers and add their sum and compare to target.
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            if (i > 0 && nums[i - 1] == nums[i]) continue;
            for (int j = i + 1; j < size; j++) {
                if (j != (i + 1) && nums[j - 1] == nums[j]) continue;

                int k = j + 1;
                int l = size - 1;
                while (k < l) {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k] + nums[l];
                    if (sum == target) {
                        vector<int>temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        l--;
                        k++;


                        while (k < l && nums[l + 1] == nums[l])l--;
                        while (k < l && nums[k - 1] == nums[k])k++;

                    }
                    else if (sum < target) {
                        k++;
                    }
                    else {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
    int getLongestZeroSumSubarrayLength(vector<int> &arr) {
        //Bruteforce approach
        // int sum = 0;
        // int length = 0;
        // for (int i = 0; i < arr.size(); i++) {
        //     sum = 0;
        //     int count = 0;
        //     for (int j = i; j < arr.size(); j++) {
        //         {
        //             sum = sum + arr[j];
        //             count++;
        //             if (sum == 0) {
        //                 length = max(length, count);
        //             }
        //         }
        //     }
        //     sum = 0;
        //     count = 0;
        // }
        // return length;
        unordered_map<int, int>mp;
        int sum = 0;
        int maxi = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum == 0) {
                maxi = i + 1;
            }
            else {
                if (mp.find(sum) != mp.end()) {
                    maxi = max(maxi, i - mp[sum]);
                }
                else {
                    mp[sum] = i;
                }
            }
        }
        return maxi;
    }
    int subarraysWithSumK(vector < int > a, int b) {
        int count = 0;
        int maxcount = 0;
        int xorr = 0;
        unordered_map<int, int>mp;
        for (int i = 0; i < a.size(); i++) {
            xorr ^= a[i];
            if (xorr == b) {
                count+=1;
            }
            else {
                if (mp.find(xorr) != mp.end()) {
                    maxcount = max(maxcount, i - mp[xorr]);
                }
                else {
                    mp[xorr] = i;
                }
            }
        }
        return maxcount;
    }
};


int main() {
    vector<int> v;
    int input;

    while (cin >> input) {
        v.push_back(input);
    }
    // while (std::cin >> input) {
    //     v.push_back({input});
    //     char nextChar = std::cin.peek();
    //     while (nextChar != '\n' && std::cin >> input) {
    //         v.back().push_back(input);
    //         nextChar = std::cin.peek();
    //     }
    // }
    Solution ans;
    int sol;
    sol = ans.subarraysWithSumK(v, 2);
    cout << sol;
    return 0;
}
