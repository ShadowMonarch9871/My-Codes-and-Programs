#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int numberOfSpecialChars(string word) {
		char special;
		unordered_set<char> unique;
		int count = 0;
		sort(word.begin(), word.end());
		for (int i = 0; i < word.length(); i++) {
			if (word[i] >= 97) {
				for (int j = 0; j < word.length(); j++) {
					if (abs(word[j] - word[i]) == 32) {
						unique.insert(word[i]);
						break;
					}
				}
			}

		}
		return unique.size();
	}
	int numberOfSpecialChars2(string word) {
		unordered_set<char> lowercaseSet;
		unordered_set<char> uppercaseSet;
		int count = 0;

		for (char c : word) {
			if (islower(c)) {
				if (uppercaseSet.find(c) == uppercaseSet.end()) {
					lowercaseSet.insert(c);
				}
				else if (lowercaseSet.find(c) != lowercaseSet.end()) {
					lowercaseSet.erase(c);
				}
			}
			else if (isupper(c)) {
				if (lowercaseSet.find(tolower(c)) != lowercaseSet.end()) {
					count++;
					lowercaseSet.erase(tolower(c));
				}
				uppercaseSet.insert(c);
			}
		}

		return count;
	}

};
int main() {
	string s = "aaAbcBCc";
	vector<int>nums = {2, 2};
	// int k = 1000000000;
	Solution ans;
	// ans.maximumPrimeDifference(nums);
	int Ans = ans.numberOfSpecialChars(s);
	// for (auto it : Ans) {
	// 	cout << it << " ";
	// }
	cout << Ans;

}