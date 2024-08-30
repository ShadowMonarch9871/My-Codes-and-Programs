#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	int dicegame3(int n) {
		int sum = 0;
		if (n == 1) return 6;
		else {
			if (n % 2 == 0) {
				return ((n * 6) + (n / 2));
			}
			else {
				return ((n * 6) + (n / 2));
			}
		}
	}
	long long sale(vector<int>Sale, long long size) {
		if (size == 0) return 0;
		long long tempsale = 0;
		long long Max = 0;
		long long currentsale = 0;
		for (int i = 0; i < size; i++) {
			tempsale = currentsale + (Sale[i] * 2);
			Max = max(tempsale, Max);
			currentsale = currentsale + Sale[i];
		}
		// for (int i = 0; i < index; i++) {
		// 	sales = sales + Sale[i];
		// }
		// sales = sales + (max * 2);
		return Max;
	}
	long long permutation(vector<int>arr, int size) {
		long long operations = 0;
		if (size == 1) return 0;
		for (int i = 0; i < size; i++) {
			if (arr[i] == i + 1) {
				if (arr[i] != size) {
					swap(arr[i], arr[i + 1]);
					operations++;
				}
				else {
					swap(arr[i], arr[i - 1]);
					operations++;
				}
			}
		}
		return operations;
	}
	long long Freedom(vector<long long>array, size) {
		int a = 0;
		int b = 0;
		int c = 0;
		int pairs;
		int j = 1;
		int i = 0;
		while ( i < j && j < size ) {
			if ((2 * (array[i] + array[j])) == (array[i] - array[j]) + (array[i]*array[j])) {
				pairs++;
				j++;
			}
			else if (j = size - 1) {
				i++;
			}
			else {
				j++;
			}

		}
		return pairs;
	}
};

int main() {
	int t;
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
		vector<long long>v;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {

			cin >> temp;
			v.push_back(temp);
		}
		Solution ans;
		long long sol = ans.Freedom(v, n);
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