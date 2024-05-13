#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int findPermutationDifference(string s, string t) {
		unordered_map<char, int>mp1;
		unordered_map<char, int>mp2;
		for (int i = 0; i < s.length(); i++) {
			if (mp1.find(s[i]) == mp1.end()) {
				mp1[s[i]] = i;
			}
		}
		for (int i = 0; i < t.length(); i++) {
			if (mp2.find(t[i]) == mp2.end()) {
				mp2[t[i]] = i;
			}
		}
		int difference = 0;
		for (int i = 0; i < s.length(); i++) {
			difference = abs(mp1[s[i]] - mp2[s[i]]) + difference;
		}
		return difference;

	}
	int maximumEnergy(vector<int>& energy, int k) {
		// unordered_map<int,int>mp;
		int count = 0;
		int i = 0; int j = i + k;
		int totalEnergy = energy[i];
		int maxx = INT_MIN;
		while (i < energy.size()) {
			if (j < energy.size()) {
				totalEnergy = totalEnergy + energy[j];
				j = j + k;
			}
			if ((j +k) >= energy.size()) {
				i++;
				totalEnergy = energy[i];
				j = i + k;
			}
			maxx = max(maxx, totalEnergy);

		}
		return maxx;
	}
};
int main() {
	vector<int>nums = {5,2,-10,-5,1};
	// int k = 1000000000;
	string s = "abc";
	string t = "bac";
	Solution ans;
	int Ans = ans.maximumEnergy(nums, 3);
	cout << Ans;

}