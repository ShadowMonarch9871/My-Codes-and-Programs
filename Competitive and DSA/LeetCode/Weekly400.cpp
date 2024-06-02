// #include<bits/stdc++.h>
#include<iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:

	int minChairsNeeded(string s) {
		int waitingRoom = 0;
		int availableChairs = 0;
		int minChairs = 0;

		for (char c : s) {
			if (c == 'E') {
				waitingRoom++;
				if (waitingRoom > availableChairs) {
					minChairs = waitingRoom;
					availableChairs++;
				}
			} else if (c == 'L') {
				waitingRoom--;
			}
		}

		return minChairs;
	}



	int countDays(int days, vector<vector<int>>& meetings) {
		map<int, int> calendar;
		for (const auto& meeting : meetings) {
			calendar[meeting[0]]++;
			calendar[meeting[1] + 1]--;
		}
		int ongoingMeetings = 0;
		int availableDays = 0;
		int currentDay = 1;
		for (const auto& event : calendar) {
			while (currentDay < event.first) {

				if (ongoingMeetings == 0) {
					availableDays++;
				}
				currentDay++;
			}
			ongoingMeetings += event.second;
		}
		while (currentDay <= days) {
			if (ongoingMeetings == 0) {
				availableDays++;
			}
			currentDay++;
		}

		return availableDays;
	}


	string clearStars(string s) {
		auto comp = [](pair<char, int> a, pair<char, int> b) {
			if (a.first == b.first) return a.second < b.second;
			return a.first > b.first;
		};
		priority_queue<pair<char, int>, vector<pair<char, int>>, decltype(comp)> pq(comp);
		vector<bool> removed(s.size(), false);

		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '*') {
				if (!pq.empty()) {
					removed[pq.top().second] = true;
					pq.pop();
				}
			} else {
				pq.push({s[i], i});
			}
		}

		string result;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] != '*' && !removed[i]) {
				result += s[i];
			}
		}
		return result;
	}
};
int main() {
	char input;
	string array;
	while (cin >> input) {
		array.push_back(input);
	}
	Solution sol;
	vector<vector<int>>queries = {{0, 1} , {1, 4} , {1, 1} , {1, 4}, {1, 1}};
	int x = 4;
	// vector<int> Ans =
	string ans = sol.clearStars(array);
	for (auto it : ans) {
		cout << it ;
	}
	// cout << ans;

}