#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int scoreOfString(string s) {
		int length = s.length();
		int sum = 0;
		for (int i = 0; i < length - 1; i++) {
			sum += abs(s[i] - s[i + 1]);
		}
		return sum;
	}
	int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
		sort(points.begin(), points.end());
		int num = 0;
		int i = 0, n = points.size();
		while (i < n) {
			int maxX = points[i][0] + w;
			int maxY = 0;
			int start = i;
			while (i < n && points[i][0] <= maxX) {
				maxY = max(maxY, points[i][1]);
				++i;
			}
			++num;
			while (start < n && points[start][0] <= maxX) {
				if (points[start][1] <= maxY) ++start;
				else break;
			}
			i = start;
		}
		return num;
	}
	long long numberOfSubarrays(vector<int>& nums) {
		int n = nums.size();
		int s = n;
		int maxx;
		for (int i = 0; i < n; i++) {
			int ele = nums[i];
			maxx = ele;
			for (int j = i; j < n; j++) {
				maxx = max(maxx, nums[j]);
				if (ele == maxx && nums[j] == maxx) {
					s += 1;
				}
			}
		}
		return s;

	}


};
int main() {
	string s = "zaz";
	vector<int>nums = {3,3,3};
	// int k = 1000000000;
	Solution ans;
	long long Ans = ans.numberOfSubarrays(nums);
	cout << Ans;

}