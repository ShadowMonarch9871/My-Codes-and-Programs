#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int flag = 0;
        int max = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if ((nums[i] > nums[i + 1])) {
                flag++;
            }

            else continue;
        }
        if(nums[nums.size()-1]>nums[0]) flag++;
        if (flag <= 1) return true;
        else return false;
    }
};
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    int input;
    while (cin >> input) {
        v.push_back(input);
    }
    Solution ans;
    bool value = ans.check(v);
    cout << boolalpha << value;
    return 0;
}