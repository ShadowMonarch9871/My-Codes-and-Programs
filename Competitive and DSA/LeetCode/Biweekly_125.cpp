#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int minOperations(vector<int>&nums, int k) {
		sort(nums.begin(), nums.end());
		int count = 0;
		for (int i = 0; nums[i] < k; i++) {

			count++;
		}
		return count;


	}
	int minOperations2(vector<int>&nums, int k) {
		sort(nums.begin(), nums.end());
		int count = 0;
		while (nums[0] < k) {
			sort(nums.begin(), nums.end());

			long long min1 = nums[0];
			long long min2 = nums[1];
			long long alter = min(min1, min2) * 2 + max(min1, min2);
			nums[1] = static_cast<int>(alter);
			nums.erase(nums.begin());
			count++;
			sort(nums.begin(), nums.end());

		}
		return count;
	}
};
int main() {

	vector<int>nums = {999999999, 999999999, 999999999};
	int k = 1000000000;
	Solution ans;
	int Ans = ans.minOperations2(nums, k);
	cout << Ans;

}