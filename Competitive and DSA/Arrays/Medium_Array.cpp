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
        map<int , int>Map;
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
    void sortColors(vector<int>& nums) {
        // int size = nums.size();
        // int max = *max_element(nums.begin(), nums.end());
        // vector<int>temp(max + 1, 0);
        // for (int i = 0; i < size; i++) {
        //     temp[nums[i]]++;
        // }
        // for (int i = 1; i < max+1; i++) {
        //     temp[i] = temp[i - 1] + temp[i];
        // }
        // vector<int>output(size);
        // // cout<<temp[4]<<endl;

        // for (int i = size - 1; i >= 0; i--) {
        //     output[temp[nums[i]] - 1]
        //         = nums[i];
        //     temp[nums[i]]--;
        // }
        // for (int i = 0; i < size; i++) {
        //     nums[i] = output[i];
        // }

        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }


    }
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int ele;
        // int n = nums.size();
        // int limit = floor(n / 2);
        // int count = 1;
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         count++;
        //     }
        //     else {
        //         count = 0;
        //     }
        //     if (count > limit) {
        //         ele = nums[i];
        //         break;
        //     }
        // }
        // return ele;
        int count = 0;
        int candidate = 0;
        for (auto it : nums) {
            if (it == candidate) count++;
            else if (count == 0) candidate = it;
            else { count--;}
        }
        return candidate;
    }
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int max = INT_MIN;
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += nums[i];
            if (sum > max)max = sum;
            if (sum < 0)sum = 0;
        }
        return max;
    }
};

int main() {
    long long k;
    // cin >> k;
    vector<int> v;
    int input;
    while (cin >> input) {
        v.push_back(input);
    }
    // vector<int>a = {1, 2, 3, 4, 6, 7};
    // vector<int>b = {2, 3, 5};

    Solution ans;

    int c = ans.maxSubArray(v);
    cout << c;
    // for (auto it : c) {
    //     cout << it << " ";
    // }
    // cout << 8 % 5;
    return 0;
}