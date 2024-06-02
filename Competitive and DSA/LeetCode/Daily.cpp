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
	int equalSubstring(string s, string t, int maxCost) {
		// int count = 0;
		// int tempCount = 0;
		// int i = 0;
		// int j = 0;
		// int cost = 0;
		// while (i < s.length() && j < s.length()) {
		// 	if (cost + abs(s[j] - t[j]) <= maxCost) {
		// 		tempCount++;
		// 		cost = cost + abs(s[j] - t[j]);
		// 		j++;
		// 	}
		// 	else {
		// 		cost = 0;
		// 		i++;
		// 		j = i;
		// 		count = max(count, tempCount);
		// 		tempCount = 0;
		// 	}
		// }
		// count = max(count, tempCount);

		// return count;
		int n = s.length();
		vector<int> cumulativeCost(n, 0);

		cumulativeCost[0] = abs(s[0] - t[0]);
		for (int i = 1; i < n; ++i) {
			cumulativeCost[i] = cumulativeCost[i - 1] + abs(s[i] - t[i]);
		}

		int maxLen = 0;
		int left = 0;
		for (int right = 0; right < n; ++right) {
			if (cumulativeCost[right] - (left > 0 ? cumulativeCost[left - 1] : 0) <= maxCost) {
				maxLen = max(maxLen, right - left + 1);
			} else {
				++left;
			}
		}

		return maxLen;
	}
	vector<int> singleNumber(vector<int>& nums) {
		map<int, int>mp;
		for (auto it : nums) {
			if (mp.find(it) != mp.end()) {
				mp[it]++;
			}
			else {
				mp[it] = 1;
			}
		}
		vector<int>ans;
		for (auto &it : mp) {
			if (it.second == 1) {
				ans.push_back(it.first);
			}
		}
		return ans;
	}
	void reverseString(vector<char>& s) {
		int low = 0;
		int high = s.size()-1;
		while (low < high) {
			swap(s[low], s[high]);
			low++;
			high--;
		}
	}

};
int main() {
	vector<char>v;
	char input;
	while (cin >> input) {
		v.push_back(input);
	}
	int k = 1;
	// cin >> k;
	Solution sol;
	sol.reverseString(v);
	// cout << ans << endl;
	for (auto it : v) {
		cout << it << " ";
	}
	// for (auto it : sol.arrays) {
	// 	for (auto it1 : it) {
	// 		cout << it1;
	// 	}
	// 	cout << endl;
	// }

}