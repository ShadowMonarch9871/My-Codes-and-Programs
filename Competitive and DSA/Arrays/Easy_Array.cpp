// #include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void swap(int &num1, int &num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    bool check(vector<int>& nums) {
        int flag = 0;
        int max = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if ((nums[i] > nums[i + 1])) {
                flag++;
            }

            else continue;
        }
        if (nums[nums.size() - 1] > nums[0]) flag++;
        if (flag <= 1) return true;
        else return false;
    }
    int removeDuplicates(vector<int>& nums) {
        int j = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }

        }
        return j;
    }
    void rotate(vector<int>& nums, int k) {
        int j = 0;
        vector<int>temp = nums;
        for (int i = 0; i < nums.size(); i++) {
            nums[(i + k) % nums.size()] = temp[i];
        }

    }
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]); i++;
            }
        }

    }
    vector < int > sortedArray(vector < int > a, vector < int > b) {
        vector<int>sol;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if ((a[i] <= b[j])) {
                if (sol.empty() || (sol.back() != a[i])) {

                    sol.emplace_back(a[i]);
                }
                i++;

            }
            else if (a[i] > b[j]) {
                if (sol.empty() || (sol.back() != b[j])) {
                    sol.emplace_back(b[j]);
                }
                j++;

            }
        }
        while (j < b.size()) {
            if (sol.empty() || (sol.back() != b[j])) {
                sol.emplace_back(b[j]);
            }
            j++;

        }
        while (i < a.size()) {
            if (sol.empty() || (sol.back() != a[i])) {

                sol.emplace_back(a[i]);
            }
            i++;

        }
        return sol;

    }
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int missing;
        for (int i = 0; i < size; i++) {
            if (nums[i] != i) {
                missing = i;
                break;
            }

        }
        return missing;
    }
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        int count = 0;
        int max_count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                max_count = max(count, max_count);
                count = 0;
            }
            else if (i == nums.size() - 1 && nums[i] == 1) {
                count++;

                max_count = max(count, max_count);

            }
            else count++;
        }
        return max_count;
    }
    int singleNumber(vector<int>& nums) {
        int count = 0;
        int misplace;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if ( i != nums.size() - 1 && nums[i] == nums[i + 1] ) {
                count++;

            }
            else if (i != nums.size() - 1 && nums[i] != nums[i + 1] && count == 1 ) {
                count = 0;

            }
            else if ( i == nums.size() - 1 || (nums[i] != nums[i + 1] && count == 0 ) ) {
                misplace = nums[i];
                break;
            }
        }
        return misplace;

    }
};

int main() {
    vector<int> v;
    int input;
    while (cin >> input) {
        v.push_back(input);
    }
    // vector<int>a = {1, 2, 3, 4, 6, 7};
    // vector<int>b = {2, 3, 5};

    Solution ans;

    int c = ans.singleNumber(v);
    cout << c;
    // for (auto it : c) {
    //     cout << it << " ";
    // }
    // cout << 8 % 5;
    return 0;
}