#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count = 0;
        for (int i = 0; i < apple.size(); i++) {
            count = count + apple[i];
        }
        int count1 = 0;
        int i = 0;
        sort(capacity.rbegin(), capacity.rend());
        while (count > 0 && i < capacity.size()) {
            count = count - capacity[i];
            count1++;
            i++;
        }
        return count1;

    }
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long happy = 0;
        sort(happiness.begin(), happiness.end());
        int i = happiness.size() - 1;
        while (k--) {
            happy = happy + happiness[i];
            i--;
            for (int j = 0; j <= i; j++) {
                if (happiness[j] > 0) {happiness[j] = happiness[j] - 1;}
            }

        }
        return happy;
    }
};
int main() {
    vector<int> v = {1, 3, 2};
    vector<int>m = {4, 3, 1, 5, 2};
    // int input;
    // while (cin >> input) {
    //     v.push_back(input);
    // }
    // // int input2;
    // while (cin >> input) {
    //     m.push_back(input);
    // }
    Solution ans;
    int value = ans.minimumBoxes(v, m);
    cout << value;
    return 0;
}