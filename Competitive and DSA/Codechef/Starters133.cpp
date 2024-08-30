#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int animals(int legs) {
		int count = 0;
		if (legs == 4) count = 1;
		else if (legs % 4 == 0) count = legs / 4;
		else if (legs % 4 > 0 && legs > 4) {
			count = legs / 4 + 1;
		}
		else count = legs / 2;
		return count;
	}


	long long alternating_sum(vector<int>& array) {
    sort(array.rbegin(), array.rend()); // Sort in descending order
    long long sum = 0;
    int n = array.size();

    // Odd length handling is naturally managed by how we add and subtract elements.
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) // Indices that are even (0-based) get added
            sum += array[i];
        else            // Indices that are odd (0-based) get subtracted
            sum -= array[i];
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
		vector<int>v;
		int temp;
		int n;
		// int high;
		// int temp;
		cin >> n ;
		for(int i=0;i<n;i++){
			cin>>temp;
			v.push_back(temp);
		}

		// vector<int>v;

		// cout<<s[2];

		// int alice, bob;
		// cin >> alice >> bob;

		Solution ans;

		long long soll = ans.alternating_sum(v);
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



