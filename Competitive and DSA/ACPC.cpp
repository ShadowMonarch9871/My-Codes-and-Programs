// #include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void watermelon(int n){
        if(n%2==0) cout<<"YES";
        else cout<<"NO";
    }

};

int main() {
    int watermelon;
    cin>>watermelon;

    Solution ans;

    ans.watermelon(watermelon);
    // for (auto it : c) {
    //     cout << it << " ";
    // }
    // cout << 8 % 5;
    return 0;
}