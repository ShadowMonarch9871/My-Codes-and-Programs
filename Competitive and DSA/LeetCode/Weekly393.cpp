#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	string findLatestTime(string s) {
		for (int i = 0; i < 5; i++) {
			if (s[i] == '?' && i == 0 && s[i + 1] == '?') {
				s[i] = '1';
			}
			if (s[i] == '?' && i == 0 && s[i + 1] > '1') {
				s[i] = '0';
			}
			if (s[i] == '?' && i == 0) {
				s[i] = '1';
			}

			if (s[i] == '?' && i == 1 && s[i - 1] == '0') {
				s[i] = '9';
			}
			if (s[i] == '?' && i == 1 && s[i - 1] == '1') {
				s[i] = '1';
			}
			if (s[i] == '?' && i == 3 ) {
				s[i] = '5';
			}
			if (s[i] == '?' && i == 4) {
				s[i] = '9';
			}
		}
		return s;
	}
	bool checkPrime(int n) {
		if (n <= 1)return false;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) return false;
		}
		return true;
	}
	int maximumPrimeDifference(vector<int>& nums) {
		int ind1, ind2;
		unordered_map<int, int>mp;
		for (int i = 0; i < nums.size(); i++) {
			if (checkPrime(nums[i])) {
				mp[i] = nums[i];
			}
		}
		int maxPrime = INT_MIN;
		int minPrime = INT_MAX;
		for (const auto& p : mp) {
			maxPrime = max(maxPrime, p.first);
			minPrime = min(minPrime, p.first);
		}
		// cout << maxPrime << "" << minPrime;
		// int maxx = mp[maxPrime];
		// int minn = mp[minPrime];
		int ans = maxPrime - minPrime;
		return ans;
	}

	int countElement(const vector<int>& coins, int x) {
		set<int> distinctNumbers;
		for (int coin : coins) {
			int maxMultiple = x / coin;
			for (int i = 1; i <= maxMultiple; i++) {
				distinctNumbers.insert(i * coin);
			}
		}
		return distinctNumbers.size();
	}

	int findKthSmallest(vector<int>& coins, int k) {
		int low = *min_element(coins.begin(), coins.end());
		int high = k * (*max_element(coins.begin(), coins.end()));

		while (low < high) {
			int mid = low + (high - low) / 2;
			if (countElement(coins, mid) < k) {
				low = mid + 1;
			} else {
				high = mid;
			}
		}

		return low;
	}

};
int main() {
	string s = "?1:?6";
	vector<int>nums = {2, 2};
	// int k = 1000000000;
	Solution ans;
	// ans.maximumPrimeDifference(nums);
	int Ans = ans.maximumPrimeDifference(nums);
	cout << Ans;

}