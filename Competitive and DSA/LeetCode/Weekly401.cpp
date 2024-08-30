// #include<bits/stdc++.h>
#include<iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
	int numberOfChild(int n, int k) {
		int effective_time = k % (2 * (n - 1));
		int answer = (effective_time < n) ? effective_time : n - (effective_time - n) - 1;
		return answer;

	}
	const int MOD = 1e9 + 7;
	vector<int> computeNextState(const std::vector<int>& a) {
		int n = a.size();
		vector<int> next(n, 0);
		next[0] = a[0];
		for (int i = 1; i < n; ++i) {
			next[i] = (next[i - 1] + a[i]) % MOD;
		}
		return next;
	}
	int valueAfterKSeconds(int n, int k) {
		std::vector<int> a(n, 1);
		for (int i = 0; i < k; ++i) {
			a = computeNextState(a);
		}
		return a[n - 1];
	}
	int maxTotalReward(vector<int>& rewardValues) {
		sort(rewardValues.begin(), rewardValues.end());
		int x = 0;


		for (const int& reward : rewardValues) {

			if (reward > x) {
				x += reward;
			}
		}
		return x;
	}


};
int main() {
	char input;
	string array;
	while (cin >> input) {
		array.push_back(input);
	}
	Solution sol;
	vector<vector<int>>queries = {{0, 1} , {1, 4} , {1, 1} , {1, 4}, {1, 1}};
	int x = 4;
	// vector<int> Ans =
	string comp = sol.compressedString(array);
	for (auto it : comp) {
		cout << it ;
	}
	// cout << Ans;

}