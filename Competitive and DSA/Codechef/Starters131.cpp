#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int diceDeception(vector<int>dice, int chances) {
		sort(dice.begin(), dice.end());
		int count = 0;
		while (chances--) {
			if (dice[count] >= 4)break;
			else {
				dice[count] = 7 - dice[count];
				count++;
			}
		}
		int sum = 0;
		for (auto it : dice) {
			sum += it;
		}
		return sum;
	}
	int catchThemAll(vector<int>pokemons,int normal,int master){
		int total=0;
		int minNormal=1;
		int minMaster=master;
		for(auto it:pokemons){
			minNormal=normal*it;
			minMaster=minMaster;
			if(minNormal>minMaster){
				total+=minMaster;
			}
			else{
				total+=minNormal;
			}
		}
		return total;
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
		int temp;
		cin >> n ;
		int chances;
		cin >> chances;
		int master;
		cin>>master;
		// vector<int>v;
		vector<int>v;
		for (int i = 0; i < n; i++) {

			cin >> temp;
			v.push_back(temp);
		}
		// cout<<s[2];

		// int alice, bob;
		// cin >> alice >> bob;

		Solution ans;

		int soll = ans.catchThemAll(v, chances,master);
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



