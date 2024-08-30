#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
int editD(string s1, string s2, int m, int n) {
	if (m == 0) return n;
	else if (n == 0) return m;
	else if (s1[m - 1] = s2[n - 1]) {
		return editD(s1, s2, m - 1, n - 1);
	}
	else {
		return 1 + min(editD(s1, s2, m, n - 1), editD(s1, s2, m - 1, n), editD(s1, s2, m - 1, n - 1));
	}
}
// }
int main() {
	string s1 = "Saturday";
	string s2 = "Sunday";
	int m = 8;
	int n = 6;
	int ans;
	// Solution answer;
	ans = editD(s1, s2, m, n);
	cout << ans;

}