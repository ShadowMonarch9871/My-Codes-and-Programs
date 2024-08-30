#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int search(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=floor((low+high)/2);
            if(target>nums[mid]){
                low=mid+1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;

    }
    int findFloor(vector<long long>&v,)


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