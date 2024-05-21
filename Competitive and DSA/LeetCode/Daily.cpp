#include <stdio.h>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
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
};
int main() {
	vector<int>v;
	int input;
	while (cin >> input) {
		v.push_back(input);
	}
	Solution sol;
	vector<vector<int>>ans=sol.subsets(v);
	for(auto it:ans){
		for(auto it1:it){
			cout<<it1;
		}
		cout<<endl;
	}

}