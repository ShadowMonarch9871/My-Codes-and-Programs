#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public: 
	void overspeeding(int n) {
		if (n > 40) cout << "YES" << endl;
		else {cout << "NO";}
	}

	void grade(int n, int m) {
		if (n < 50)cout << "Z" << endl;
		else if (n >= 50 && m < 50)cout << "F" << endl;
		else {
			cout << "A" << endl;
		}
	}

	int fakecertificate(long long size, string v) {
		int i = 0;
		int j = 0;
		int count = 0;
		int max_count = 0;
		int onesCount = 0;
		while (j < size) {
			if (v[j] == '0') {
				count++;
				j++;
			}
			else if (v[j] == '1') {
				onesCount++;
				max_count = max(count, max_count);
				i++;
				j++;
				count = 0;
			}
		}
		if (count > max_count) {
			return (count + onesCount);

		}

		else {

			return (max_count + onesCount);

		}


	}
};

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		string v;
		v.resize(n);
		for (int i = 0; i < n; i++) {
			char temp;
			cin >> temp;
			v[i] = temp;
		}
		Solution ans;
		int sol = ans.fakecertificate(n, v);
		cout << sol << endl;
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