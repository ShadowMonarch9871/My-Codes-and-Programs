#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubstringPresent(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        int count = 0;
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            while (j < s.length()) {
                if (i != s.length() - 1 && j != s.length() - 1 && s[i] == rev[j] && s[i + 1] == rev[j + 1] ) {
                    count++;
                    j++;

                }
                else {j++;}
            }
            j = 0;
        }
        if (count > 0 )return true;
        else return false;
    }
    long long countSubstrings(string s, char c) {
        long long count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c) {
                count++;
            }
        }
        return count * (count + 1) / 2;
    }

};
int main() {
    vector<int> v = {1, 3, 2};
    vector<int>m = {4, 3, 1, 5, 2};
    string s = "zzz";
    char c = 'z';
    // int input;
    // while (cin >> input) {
    //     v.push_back(input);
    // }
    // // int input2;
    // while (cin >> input) {
    //     m.push_back(input);
    // }
    Solution ans;
    long long value = ans.countSubstrings(s, c);
    cout << value;
    return 0;
}