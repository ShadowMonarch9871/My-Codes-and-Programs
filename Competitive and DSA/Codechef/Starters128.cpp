#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
using namespace std;

class Solution {
public:
	vector<int>moodychef(vector<int>nums, int low, int high) {
		int size = nums.size();
		int Min = 0;
		int Max = 0;
		int happiness = 0;
		for (auto it : nums) {
			if (it >= low && it <= high) {
				happiness++;
				Max = max(Max, happiness);
			}
			else {
				happiness--;
				Min = min(happiness, Min);
			}
		}
		return vector<int>({Max, Min});

	}
	int mex(vector<int>nums) {
		sort(nums.begin(), nums.end());
		int count = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != i) {
				while (nums[i] > i) {
					nums[i] -= 1;
					count++;
				}
				while (nums[i] < i) {
					nums[i] += 1;
					count++;
				}
			}
		}
		return count;
	}
};

int main() {
	int t;
	// cout<<3/2;
	cin >> t;
	while (t--) {
		// long long n;
		// cin >> n;
		// string v;
		// v.resize(n);
		// for (int i = 0; i < n; i++) {
		// 	char temp;
		// 	cin >> temp;
		// 	v[i] = temp;
		// }
		int low;
		// vector<long long>v;
		vector<int>v;
		int n;
		int high;
		int temp;
		cin >> n ;
		for (int i = 0; i < n; i++) {

			cin >> temp;
			v.push_back(temp);
		}

		Solution ans;

		int sol = ans.mex(v);
		// for (auto it : array) {
		// 	cout << it << " ";
		// }
		cout << sol;
		cout << endl;
		// cout << sol << endl;
	}
}




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int N;

// 		int oneCount = 0, temp1 = 0;
// 		int zeroCount = 0, temp0 = 0;
// 		int oneCount1 = 0;
// 		int ans = 0;
// 		cin >> N;

// 		string v;
// 		v.resize(N);
// 		for (int i = 0; i < N; i++) {
// 			char temp;
// 			cin >> temp;
// 			v[i] = temp;
// 		}

// 		for (int i = 0; i < N; i++) {
// 			if (v[i] == '1') {
// 				oneCount++;
// 				if (temp0 < zeroCount) {
// 					temp0 = zeroCount;
// 				}
// 				zeroCount = 0;
// 			}
// 			else if (v[i] == '0') {
// 				zeroCount++;
// 				if (temp1 < oneCount) {
// 					temp1 = oneCount;
// 				}
// 				oneCount = 0;
// 			}
// 		}
// 		// for (int  i = 0; i < N; i++) {
// 		// 	if (v[i] == 1) {
// 		// 		oneCount1++;
// 		// 	}
// 		// }
// 		cout<<temp0<<endl;
// 		// if (oneCount == N || zeroCount == N) {
// 		// 	cout << N << endl;
// 		// }
// 		// else {
// 		// 	ans = temp0 + temp1;
// 		// 	cout << ans << endl;
// 		// }

// 	}

// }