#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	int score(int alice, int bob) {
		if (alice - bob >= 10) return 0;
		int count = 0;
		while (alice - bob < 10) {
			alice = alice + 3;
			count++;
		}
		return count;
	}
	void superincreasing(int size, int index, int element) {
		int space;
		if (size == 1 && index == 1) cout << "NO" << endl;
		else {
			if (index > (size / 2) && size != index) {
				space = size - index;
			}
			else if (size == index) space = size - 1;
			else  space = (size / 2) - index;
			int sum = space * (space + 1) / 2;
			// cout<<sum;
			if (element > sum)cout << "YES" << endl;
			else cout << "NO" << endl;
		}
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
		int temp;
		// vector<long long>v;
		int n;
		int m;
		cin >> n >> temp >> m;
		// for (int i = 0; i < n; i++) {

		// 	cin >> temp;
		// 	v.push_back(temp);
		// }
		Solution ans;
		ans.superincreasing(n, temp, m);
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