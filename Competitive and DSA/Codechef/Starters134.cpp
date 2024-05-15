#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int moneyDouble(int money, int years) {
		while (years--) {
			if (money > 1000) {
				money *= 2;
			}
			else {
				money = money + 1000;
			}
		}
		return money;
	}
	int rockPaperScissors(string s) {
		int wins = 1;
		char previousChoice ;
		char winningChoice;
		int flag = 0;
		if (s[0] == 'R') previousChoice = 'P';
		if (s[0] == 'P') previousChoice = 'S';
		if (s[0] == 'S') previousChoice = 'R';

		for (int i = 1; i < s.length(); i++) {
			if (s[i] == 'R') winningChoice = 'P';
			if (s[i] == 'P') winningChoice = 'S';
			if (s[i] == 'S') winningChoice = 'R';



			if (s[i] != s[i - 1]) {
				wins++;
				if (s[i] == 'R') previousChoice = 'P';
				else if (s[i] == 'P') previousChoice = 'S';
				else previousChoice = 'R';
				flag = 0;
			}
			else if (s[i] == s[i - 1] && previousChoice != winningChoice ) {
				wins++;
				previousChoice = winningChoice;
				flag = 0;
			}
			else if (s[i] == s[i - 1] && previousChoice == winningChoice && flag == 1) {
				wins++;
				previousChoice = winningChoice;
				flag = 0;
			}
			else {
				flag = 1;
			}

		}
		return wins;

	}

	long long digitalRoot(long long x) {
		return x == 0 ? 0 : (x % 9 == 0 ? 9 : x % 9);
	}
	long long origin(long long n) {
		long long sum = 0;
		for (long long i = 1; i <= n; ++i) {
			sum += digitalRoot(i);
		}
		return sum;
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
		char temp;
		int n;
		// int high;
		// int temp;
		cin >> n;
		string v;

		// for (int i = 0; i < n; i++) {
		// 	cin >> temp;
		// 	v.push_back(temp);
		// }

		// vector<int>v;

		// cout<<s[2];

		// int alice, bob;
		// cin >> alice >> bob;

		Solution ans;
		long long soll = ans.origin(n);
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



