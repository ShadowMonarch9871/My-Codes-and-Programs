#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void swappingMarkDigits(int a, int b) {
		int temp1, temp2;
		temp1 = ((a % 10) * 10) + (a / 10);
		temp2 = ((b % 10) * 10) + (b / 10);
		// cout << temp1 << " " << temp2;
		if (a > b || temp1 > b || a > temp2 || temp1 > temp2) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}
	string canMakeElementsEqual(vector<int> arr) {
		int minValue = *min_element(arr.begin(), arr.end());
		for (int i = 1; i < arr.size() - 1; i++) {
			if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1] && arr[i - 1] > arr[i + 1]) {
				return "No";
			}
		}
		return "Yes";
	}

	void makeEqual(vector<int>v) {
		int minn = *min_element(v.begin(), v.end());
		int flag = 0;
		if (v.size() == 2) {
			if (v[1] >= v[0])cout << "YES";
			else cout << "NO";
		}
		else {
			for (int i = 1; i < v.size() - 1; i++) {
				if (v[i] >= v[i - 1] && v[i] >= v[i + 1] && v[i - 1] > v[i + 1]) {
					cout << "NO";
					flag++;
					break;
				}
			}
			if (flag == 0) {
				cout << "YES";
			}
		}
	}
	int minOperations(string s) {
		int operations = 0;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] == s[i - 1]) {
				operations++;
				for (int j = i; j < s.size(); j++) {
					s[j] = s[j] == '0' ? '1' : '0';
				}
			}
		}
		return operations;
	}

};

int main() {
	int t;
	cin >> t;
	while (t--) {


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
		int n;
		// int high;
		// int temp;
		cin >> n ;
		// vector<int>v;
		string s;
		char temp;
		for (int i = 0; i < n; i++) {

			cin >> temp;
			s[i]=temp;
		}
		// cout<<s[2];

		// int alice, bob;
		// cin >> alice >> bob;

		Solution ans;

		int soll = ans.minOperations(s);
		cout << soll;
		// cout << answerYES
		cout << endl;
		// for (auto it : array) {
		// 	cout << it << " ";
		// }
		// cout << sol;
		// cout << endl;
		// cout << sol << endl;
	}
}



