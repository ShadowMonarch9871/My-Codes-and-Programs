#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	void cricketMatch(int n, int m) {
		if (n / 2 >= m) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	void binParity(int n) {
		string parity = bitset<30>(n).to_string();
		int count = 0;
		for (int i = 0; i < 30; i++) {
			count = count + parity[i];
		}
		if (count % 2 == 0)cout << "EVEN" << endl;
		else if (count % 2 != 0)cout << "ODD" << endl;

	}

};
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n;
		Solution ans;
		ans.binParity(n);

	}
	// cout<<"Hello";
	// Solution ans;
	// ans.binParity(8);
}