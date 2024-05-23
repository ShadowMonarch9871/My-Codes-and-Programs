#include <stdio.h>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<vector<int>>arrays;
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> ans;
		ans.push_back(vector<int>());
		int i = 0;
		while (i < nums.size()) {
			int k = i;
			while (k < nums.size()) {
				int j = i;
				vector<int>temp;
				while (j <= k) {
					temp.push_back(nums[j]);
					j++;
				}
				ans.push_back(temp);
				k++;
			}
			i++;
		}
		return ans;
	}
	int beautifulSubsets(vector<int>& nums, int k) {
		int count = 0;
		int i = 0;
		while (i < nums.size()) {
			int j = i;
			while (j < nums.size()) {
				if (abs(nums[i] - nums[j]) != k) {
					count++;
					vector<int>temp;
					temp.push_back(nums[i]);
					temp.push_back(nums[j]);
					arrays.push_back(temp);
				}
				j++;
			}
			i++;
		}
		return count;

	}
};
int main() {
	vector<int>v;
	int input;
	while (cin >> input) {
		v.push_back(input);
	}
	int k = 1;
	// cin >> k;
	Solution sol;
	int ans = sol.beautifulSubsets(v, k);
	cout << ans << endl;
	for (auto it : sol.arrays) {
		for (auto it1 : it) {
			cout << it1;
		}
		cout << endl;
	}

}