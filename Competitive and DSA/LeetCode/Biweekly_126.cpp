#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int sumOfEncryptedInt(vector<int>& nums) {
		int maxele = 0;
		int count = 0;
		for (int i = 0; i < nums.size(); i++) {
			int num = nums[i];
			while (num > 0) {
				count++;
				num = num / 10;
			}
			int temp = count;
			num = nums[i];
			int rem;
			maxele=0;
			while (count > 0) {
				rem = num % 10;
				num = num / 10;
				maxele = max(maxele, rem);
				count--;
			}
			num = 0;
			while (temp > 0) {
				num = (num * 10) + maxele ;

				temp--;
			}
			nums[i] = num;
		}
		int sum = 0;
		for (int i = 0; i < nums.size(); i++) {
			sum = sum + nums[i];
		}
		return nums[1];
	}

};
int main() {

	vector<int>nums = {6,53};
	int k = 1000000000;
	Solution ans;
	int Ans = ans.sumOfEncryptedInt(nums);
	cout << Ans;

}