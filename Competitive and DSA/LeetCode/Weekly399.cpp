// #include<bits/stdc++.h>
#include<iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:

	int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
		int count = 0;
		for (int i = 0; i < nums1.size(); i++) {
			for (int j = 0; j < nums2.size(); j++) {
				if (nums1[i] % (nums2[j]*k) == 0) {
					count++;
				}
			}
		}
		return count;
	}
	string compressedString(string word) {
		string comp;
		int i = 0;
		int j = i;
		int count = 0;

		while (i < word.length() && j < word.length()) {
			if (word[j] == word[i]) {
				count++;
				j++;
			}
			else if (count == 9) {
				comp.push_back('9');
				comp.push_back(word[i]);
				count = 0;
				i = j;
			}
			else if (j == word.length() || word[j] != word[i]) {
				comp.push_back(count + '0');
				comp.push_back(word[i]);
				count = 0;
				i = j;
			}
		}
		return comp;
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