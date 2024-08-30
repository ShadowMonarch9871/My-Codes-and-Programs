#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    


};


auto init = []()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();


int main() {
    int input;
    vector<int>array;
    while(cin>>input){
        array.push_back(input);
    }
    Solution sol;
    int ans=sol.search(array,2);
    cout<<ans;
}