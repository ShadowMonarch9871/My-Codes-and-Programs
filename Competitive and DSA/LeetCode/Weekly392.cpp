#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();

        int maxLength = 1;
        int increasingLength = 1;
        int decreasingLength = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                increasingLength++;
                decreasingLength = 1;
            } else if (nums[i] < nums[i - 1]) {
                decreasingLength++;
                increasingLength = 1;
            } else {
                increasingLength = 1;
                decreasingLength = 1;
            }

            maxLength = max(maxLength, max(increasingLength, decreasingLength));
        }

        return maxLength;
    }
};
int main() {
    // vector<int> v = {1, 3, 2};
    // vector<int>m = {4, 3, 1, 5, 2};
    // string s = "zzz";
    // char c = 'z';
    vector<int>v;
    int input;
    while (cin >> input) {
        v.push_back(input);
    }
    // // int input2;
    // while (cin >> input) {
    //     m.push_back(input);
    // }
    Solution ans;
    int value = ans.longestMonotonicSubarray(v);
    cout << value;
    return 0;
}