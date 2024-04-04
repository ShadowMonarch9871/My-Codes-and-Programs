#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
using namespace std;

class Solution {
public:
	vector<int> cutTheSticks(vector<int> arr) {

		std::vector<int> ss; 

		while (!arr.empty()) { 
			int minStick = *std::min_element(arr.begin(), arr.end());

			for (int& stick : arr) {
				stick -= minStick;
			}

			ss.push_back(arr.size());
			arr.erase(std::remove(arr.begin(), arr.end(), 0), arr.end());
		}

		return ss;
	}
};

int main() {
	int input;
	vector<int>v;
	while (cin >> input) {
		v.emplace_back(input);
	}
	vector<int>sol;
	Solution s;
	sol = s.cutTheSticks(v);
	for (auto it : sol) {
		cout << it << " ";
	}

	// int t;
	// // cout<<3/2;
	// cin >> t;
	// while (t--) {
	// 	// long long n;
	// 	// cin >> n;
	// 	// string v;
	// 	// v.resize(n);
	// 	// for (int i = 0; i < n; i++) {
	// 	// 	char temp;
	// 	// 	cin >> temp;
	// 	// 	v[i] = temp;
	// 	// }
	// 	int low;
	// 	// vector<long long>v;
	// 	vector<int>v;
	// 	int n;
	// 	int high;
	// 	int temp;
	// 	cin >> n ;
	// 	for (int i = 0; i < n; i++) {

	// 		cin >> temp;
	// 		v.push_back(temp);
	// 	}

	// 	Solution ans;

	// 	vector<int> sol = ans.cutTheSticks(v);
	// 	for (auto it : sol) {
	// 		cout << it << " ";
	// 	}
	// 	// cout << sol;
	// 	cout << endl;
	// 	// cout << sol << endl;
	// }
}



