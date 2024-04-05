#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
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
    int maxProfit(vector<int>& prices) {
        int min1 = prices[0];
        int Max = 0;
        //Brute Force
        // for (int i = 0; i < size; i++) {
        //     for (int j = i + 1; j < size; j++) {
        //         if (prices[i] < prices[j] && i != j) {
        //             max1 = max(max1, prices[j] - prices[i]);
        //         }
        //     }
        // }
        for (int today = 1; today < prices.size(); today++) {
            if (prices[today] < min1) {
                min1 = prices[today];
            }
            else {
                Max = max(Max, prices[today] - min1);
            }
        }
        return Max;
    }
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int>temp(size);
        int pindex = 0;
        int nindex = 1;
        for (int i = 0; i < size; i++) {
            if (nums[i] > 0) {
                temp[pindex] = nums[i];
                pindex += 2;
            }
            else {
                temp[nindex] = nums[i];
                nindex += 2;
            }

        }
        return temp;


    }
    void nextPermutation(vector<int>& nums) {
        int breakpoint = -1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                breakpoint = i ;
                break;
            }
        }
        cout << breakpoint << endl;
        if (breakpoint == -1) {
            reverse(nums.begin(), nums.end());
        }
        else {
            for (int i = nums.size() - 1; i > breakpoint; i--) {
                if (nums[i] > nums[breakpoint] && i != breakpoint) {
                    swap(nums[i], nums[breakpoint]);
                    break;
                }
            }
            reverse(nums.begin() + breakpoint + 1, nums.end());
        }
    }
    vector<int> superiorElements(vector<int>&a) {
        int i = a.size() - 2;
        int j = a.size() - 1;
        vector<int>temp;
        temp.push_back(a[j]);
        while (i >= 0 && j >= 0) {
            if (a[i] > a[j]) {
                temp.push_back(a[i]);
                j = i;
                i--;
            }
            else {
                i--;
            }
        }
        sort(temp.begin(), temp.end());
        return temp;
    }
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for (auto it : nums) {
            set.insert(it);
        }
        int longestConsecutiveSequence = 0;
        int currentConsecutiveSequence = 0;

        for (auto it : set) {

            if (set.find(it - 1) == set.end()) {
                currentConsecutiveSequence = 1;
                while (set.find(it + 1) != set.end()) {
                    currentConsecutiveSequence++;
                    it++;
                }
                longestConsecutiveSequence = max(longestConsecutiveSequence, currentConsecutiveSequence);

            }

        }
        return longestConsecutiveSequence;

    }
    void setZeroes(vector<vector<int>>& matrix) {
        //Using a map doesn't store duplicate values and multimap not working.


        // multimap<int, int> hash;
        // for (int i = 0; i < matrix.size(); i++) {
        //     for (int j = 0; j < matrix[i].size(); j++) {
        //         if (matrix[i][j] == 0) {
        //             hash.emplace(i, j);
        //         }
        //     }
        // }
        // // for(auto it:hash){
        // //     cout<<it.first<<" "<<it.second<<endl;
        // // }
        // for (auto i : hash) {
        //     for (int j = 0; j < matrix.size(); j++) {
        //         matrix[j][i.first] = 0;
        //         for (int k = 0; k < matrix[j].size(); k++) {
        //             matrix[i.second][k] = 0;

        //         }

        //     }

        // }
        unordered_set<int>rows, columns;
        for (auto i = 0; i < matrix.size(); i++) {
            for (auto j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    columns.insert(j);
                }
            }
        }
        for (int row : rows) {
            for (int i = 0; i < matrix[0].size(); i++) {
                matrix[row][i] = 0;
            }
        }
        for (int column : columns) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][column] = 0;
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i; j < matrix[i].size(); j++) {
                if (i != j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {

                swap(matrix[i][j], matrix[i][(n - j) - 1]);

            }
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        while (right >= left && bottom >= top) {
            for (int i = left; i <= right; i++) {
                ans.emplace_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                ans.emplace_back(matrix[i][right]);

            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.emplace_back(matrix[bottom][i]);
                }

                bottom--;
            }
            if (right >= left) {
                for (int i = bottom; i >= top; i--) {
                    ans.emplace_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
    int subarraySum(vector<int>& nums, int k) {
        //Gives TLE



        // int count = 0;
        // int i = 0;
        // int j = 0;
        // int sum = 0;
        // while (i < nums.size()) {
        //     if (sum == k) {
        //         count++;
        //         sum = sum - nums[i];
        //         i++;
        //     }
        //     else if (sum > k) {
        //         sum = sum - nums[i];
        //         i++;

        //     }
        //     else if (sum < k && j < nums.size()) {
        //         sum += nums[j];
        //         j++;
        //     }
        //     else if (j >= nums.size()) {
        //         j--;
        //     }
        // }
        // return count;
        map<int , int>Map;
        Map[0] = 1;
        int count = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int remaining = sum - k;
            if (Map.find(remaining) != Map.end()) {
                count += Map[sum - k];

            }
            Map[sum]++;
        }
        return count;
    }
};

int main() {
    // long long k;
    // cin >> k;


    int input;
    while (cin >> input) {
        v.push_back(input);
    }
    int k = 3;
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
    int sol;
    sol = ans.getLongestSubarray(v, k);
    cout << sol;
// for (auto it : v) {
//     for (auto it1 : it) {
//         cout << it1 << " ";
//     }
//     cout << endl;
// }
// cout << 8 % 5;
// for (auto it : sol) {
//     cout << it << " ";
// }
    return 0;
}