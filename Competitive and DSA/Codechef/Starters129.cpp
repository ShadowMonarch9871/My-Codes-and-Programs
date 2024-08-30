#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void football(int n, int m) {
		if (n > m) cout << "FREEKICK" << endl;
		else cout << "PENALTY" << endl;
	}
	void pepbidding(vector<int>attackA, vector<int>attackB, vector<int>defA, vector<int>defB) {
		int totalAttackA = 0;
		int totalAttackB = 0;
		int totalDefenceA = 0;
		int totalDefenceB = 0;
		for (auto it : attackA) {
			totalAttackA += it;
		}
		for (auto it : defA) {
			totalDefenceA += it;
		} for (auto it : attackB) {
			totalAttackB += it;
		} for (auto it : defB) {
			totalDefenceB += it;
		}
		if (totalAttackA > totalAttackB && totalDefenceA > totalDefenceB)cout << "A" << endl;
		else if (totalAttackB > totalAttackA && totalDefenceB > totalDefenceA)cout << "P" << endl;
		else cout << "DRAW" << endl;


	}
	double eighth_root(double m) {
		return pow(m, 1.0 / 8.0);
	}
	void ballondor(vector<int>n) {
		long long product = 1;
		int count1 = 0;
		int count2 = 0;
		for (auto it : n) {
			if (it == 1)count1++;
			else count2++;
		}
		if (count2 % 8 == 0 && count2 != 0)cout << "YES" << endl;
		else if (count1 == 1 || count2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;

		//To be review for case 1 1 1 1 my code returns YES. Have to fix and check the else if case specifically the OR condition.


		
		// int count2 = 0;
		// for (int num : n) {
		// 	if (num == 2) {
		// 		count2++;
		// 	}
		// }

		// if ((count2 % 8 == 0 ) || (n.size() == 1 && n[0] == 1)) {
		// 	cout << "YES" << endl;
		// }

		// else {
		// 	cout << "NO" << endl;
		// }
	}
};

int main() {
	int t;
	// cout<<3/2;
	Solution ans;
	// int n, m;
	// cin >> n >> m;

	// int sol = ans.football(n, m);
	cin >> t;
	while (t--) {
		// int n, m;
		// cin >> n >> m;
		int n;
		// long long n;
		cin >> n;
		// string v;
		// v.resize(n);
		// for (int i = 0; i < n; i++) {
		// 	char temp;
		// 	cin >> temp;
		// 	v[i] = temp;
		// }
		// int low;
		// vector<long long>v;
		// vector<int>v;
		// int n;
		// int high;
		// int temp;
		// cin >> n ;
		vector<int>v;
		int temp;
		for (int i = 0; i < n; i++) {

			cin >> temp;
			v.push_back(temp);
		}


		Solution ans;

		ans.ballondor(v);
		// for (auto it : array) {
		// 	cout << it << " ";
		// }
		// cout << sol;
		// cout << endl;
		// cout << sol << endl;
	}
}



