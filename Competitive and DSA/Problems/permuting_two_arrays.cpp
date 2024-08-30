#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	string twoArrays(int k, vector<int> A, vector<int> B) {
		vector<int>Alter;
		vector<int>Balter;
		int sizeA = A.size();
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());


		for (int i = 0; i < sizeA; i++) {
			int sizeB = B.size();
			// cout<<A[i]<<" ";

			for (int j = 0; j < sizeB; j++) {
				// cout<<B[j]<<" ";
				if (A[i] + B[j] >= k) {
					Alter.emplace_back(A[i]);
					Balter.emplace_back(B[j]);
					B.erase(B.begin() + j);
					break;
				}
			}
		}


		if (Alter.size() == sizeA) {
			return "YES";
		}
		else return "NO";

	}
	string twoArrays1(int k, vector<int> A, vector<int> B) {
		sort(A.begin(), A.end());  // sort A in ascending order
		sort(B.rbegin(), B.rend());  // sort B in descending order

		int n = A.size();

		for (int i = 0; i < n; ++i) {
			if (A[i] + B[i] < k) {
				return "NO";
			}
		}

		return (A.size() == B.size() ? "YES" : "NO");
	}
	int superDigit(string n, int k) {
		int sum = 0;
		string result;
		for (int i = 0; i < k; i++) result += n - '0';
		int size = result.size();
		if (size == 1) return size;
		else {
			for (auto it : result) sum += it - '0';
			return superDigit(to_string(sum), 0);
		}

	}
	int superDigit1(string n, int k) {
		long long sum = 0;
		for (char c : n) {
			sum += (c - '0');
		}
		sum *= k;
		if (sum < 10) return sum;
		else return superDigit(to_string(sum), 1);
	}
	int solve(string s, int i,int j){
		if(i>=j)
	}







};
int main() {
	int k;
	int querries;
	string s;
	cin >> querries;
	Solution Answer;
	while (querries > 0) {
		cin >> s >> k;
		int ans;
		ans = Answer.superDigit(s, k);
		cout << ans;

		querries--;
	}
	
}