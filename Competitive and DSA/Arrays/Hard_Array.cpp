#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        // for (int i = 0; i < numRows; i++) {
        //     ans[i].resize(i + 1, 0);
        //     for (int j = 0; j <= i; j++) {
        //         ans[i][0] = 1;
        //         ans[i][i] = 1;
        //         if (i >=2&&(j>=1&&j<=i-1)) {
        //             ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        //         }
        //     }
        // }
        for(int i=1;i<=numRows;i++){
            ans.push_back(GenerateRow(i));
        }
        return ans;

    }
    vector<int>GenerateRow(int Rownumber){
        vector<int>Row(Rownumber,1);
        long long ans=1;
        for(int i=1;i<Rownumber-1;i++){
            ans=ans*(Rownumber-i);
            ans=ans/(i);
            Row[i]=ans;
        }
        return Row;
    }
};

int main() {
    // long long k;
    // cin >> k;
    vector<int> v;


    int input;
    cin >> input;
    // while (cin >> input) {
    //     v.push_back(input);
    // }
    // int k = 3;;

    // int input;
    // while (std::cin >> input) {
    //     v.push_back({input});
    //     char nextChar = std::cin.peek();
    //     while (nextChar != '\n' && std::cin >> input) {
    //         v.back().push_back(input);
    //         nextChar = std::cin.peek();
    //     }
    // }
    // vector<int>a = {1, 2, 3, 4, 6, 7};
    // vector<int>b = {2, 3, 5};

    Solution ans;
    vector<vector<int>> sol;
    sol = ans.generate(input);
    // cout << sol;
    for (auto it : sol) {
        for (auto it1 : it) {
            cout << it1 << " ";
        }
        cout << endl;
    }
    // cout << 8 % 5;
    // for (auto it : sol) {
    //     cout << it << " ";
    // }
    return 0;
}