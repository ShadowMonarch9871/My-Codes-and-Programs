#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int duplicateNumbersXOR(vector<int>& nums) {
		vector<int >twice;
		sort(nums.begin(), nums.end());
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] == nums[i - 1]) {
				twice.push_back(nums[i]);
			}
		}
		int xorr = 0;
		for (auto it : twice) {
			xorr ^= it;
		}
		return xorr;
	}
	vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
		int index;
		vector<int>ans;
		unordered_map<int, int>mp;
		int j = 1;
		for (int i = 0; i  < nums.size(); i++) {
			if (nums[i] == x) {
				mp[j] = i;
				j++;
			}
		}
		for (auto querry : queries) {
			if (mp.find(querry) != mp.end()) {
				ans.push_back(mp[querry]);
			}
			else ans.push_back(-1);
		}
		return ans;

	}
	void queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> ans;
        unordered_map<int, int> mp;
        unordered_set<int> s;
        for (auto query : queries) {
            if (mp.find(query[0]) != mp.end()) {
                int prevColor = mp[query[0]];
                if (prevColor != 0) {
                    cout << "Previous color is " << prevColor << " ";
                    s.erase(prevColor);
                }
                mp[query[0]] = query[1];
                s.insert(query[1]);
                ans.push_back(s.size());
                for (auto it : s) {
                    cout << it << " ";
                }
                cout << endl;
            } else {
                mp[query[0]] = query[1];
                s.insert(query[1]);
                ans.push_back(s.size());
                for (auto it : s) {
                    cout << it << " ";
                }
                cout << endl;
            }
        }
    }

};
int main() {
	int input;
	vector<int>array;
	// while (cin >> input) {
	// 	array.push_back(input);
	// }
	Solution sol;
	vector<vector<int>>queries = {{0, 1} , {1, 4} , {1, 1} , {1, 4},{1,1}};
	int x = 4;
	// vector<int> Ans =
	sol.queryResults(x, queries);
	// for (auto it : Ans) {
	// 	cout << it << " ";
	// }
	// cout << Ans;

}