// #include<bits/stdc++.h>
#include<iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
	

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