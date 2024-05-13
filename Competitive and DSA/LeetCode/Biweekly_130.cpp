#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool satisfiesConditions(vector<vector<int>>& grid) {
		int rows = grid.size();
		int columns = grid[0].size();
		int flag = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				if (i != rows - 1) {
					if (grid[i][j] != grid[i + 1][j]) {
						flag = 1;
						break;
					}
				}
				if (j != columns - 1) {
					if (grid[i][j] == grid[i][j + 1]) {
						flag = 1;
						break;
					}
				}
			}
		}
		if (flag == 0) return true;
		else return false;
	}
	int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
		vector<pair<int>>validSquares;
		for (int i = 0; i < points.size(); i++) {
			if (points[i][0] == points[i][1]) {
				validSquares.push_back({points[0], points[1]});
			}
		}
		int count=0;
		int maxx=0;
		sort(points.begin(),points.end());
		for(int i=0;i<points.size();i++){
			if(points[i][0]==points[i][1]){
				while(Ṭ)
			}
		}
	}

};
int main() {
	vector<vector<int>>nums = {{1, 0, 2}, {1, 0, 2}};
	// int k = 1000000000;
	Solution ans;
	bool Ans = ans.satisfiesConditions(nums);
	cout << Ans;

}