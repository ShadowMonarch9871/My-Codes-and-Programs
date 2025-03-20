#include <bits/stdc++.h>
#include <cinttypes>
using namespace std;
class Solution {
public:
  int search(vector<int> &nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
      int mid = floor((low + high) / 2);
      if (target > nums[mid]) {
        low = mid + 1;
      } else if (target < nums[mid]) {
        high = mid - 1;
      } else {
        return mid;
      }
    }
    return -1;
  }
  int findFloor(vector<long long> &v, long long n, long long x) {
    int low = 0;
    int high = n - 1;
    long long floor_index = -1;
    while (low <= high) {
      int mid = floor(low + (high - low) / 2);
      if (v[mid] <= x) {
        floor_index = mid;
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return floor_index;
  }
  pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    pair<int, int> ans;
    int ceil_index = -1;
    int floor_index = -1;
    int low = 0;
    int high = a.size() - 1;
    while (low <= high) {
      int mid = floor(low + (high - low) / 2);
      if (a[mid] > x) {
        high = mid - 1;
        ceil_index = mid;
      } else if (a[mid] < x) {
        low = mid + 1;
        floor_index = mid;
      } else {
        ceil_index = floor_index = mid;
        break;
      }
    }
    if (ceil_index < 0 && floor_index >= 0) {
      ans = {a[floor_index], -1};
    } else if (floor_index < 0 && ceil_index >= 0) {
      ans = {-1, a[ceil_index]};
    } else if (floor_index >= 0 && ceil_index >= 0) {
      ans = {a[floor_index], a[ceil_index]};
    } else {
      ans = {-1, -1};
    }
    return ans;
  }
  int searchInsert(vector<int> &nums, int target) {
    int index = nums.size();
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
      int mid = floor(low + (high - low) / 2);
      if (nums[mid] >= target) {
        index = mid;
        high = mid - 1;
      } else
        low = mid + 1;
    }
    return index;
  }
  vector<int> searchRange(vector<int> &nums, int size, int target) {
    int first_occurence = -1;
    int last_occurence = -1;
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
      int mid = floor(low + (high - low) / 2);
      if (nums[mid] == target) {
        first_occurence = mid;
        high = mid - 1;
      } else if (nums[mid] > target) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    low = 0;
    high = nums.size() - 1;
    while (low <= high) {
      int mid = floor(low + (high - low) / 2);
      if (nums[mid] == target) {
        last_occurence = mid;
        low = mid + 1;
      } else if (nums[mid] < target) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return vector<int>{first_occurence, last_occurence};
  }
  int searchRoatedArray(vector<int> nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int index = -1;
    while (low <= high) {
      int mid = floor(low + (high - low) / 2);
      if (nums[mid] == target)
        index = mid;
      if (nums[low] <= nums[mid]) {
        if (nums[mid] >= target) {
          high = mid - 1;
        } else
          low = mid + 1;
      }
      if (nums[high] >= nums[mid]) {
        if (nums[mid] <= target) {
          low = mid + 1;
        } else
          high = mid + 1;
      }
    }
    return index;
  }
  bool Search(vector<int> &nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (nums[mid] == target)
        return true;
      else {
        if (nums[mid] == nums[low] && nums[mid] == nums[high]) {
          low++;
          high--;
        } else {
          if (nums[mid] <= nums[high]) {
            if (target <= nums[high] && target >= nums[mid]) {
              low = mid + 1;
            } else
              high = mid - 1;
          } else if (nums[mid] >= nums[low]) {
            if (target >= nums[low] && (target <= nums[mid])) {
              high = mid - 1;
            } else
              low = mid + 1;
          }
        }
      }
    }
    return false;
  }
  int findMin(vector<int> &nums) {
    int low = 0;
    int high = nums.size() - 1;
    int mid = low + (high - low) / 2;
    int minimum = nums[mid];
    while (low <= high) {
      mid = low + (high - low) / 2;
      if (nums[low] <= nums[high])
        return minimum = min(minimum, nums[low]);
      if (nums[low] <= nums[mid]) {
        minimum = min(minimum, nums[low]);
        low = mid + 1;
      } else if (nums[mid] <= nums[high]) {
        minimum = min(minimum, nums[mid]);
        high = mid - 1;
      }
    }
    return minimum;
  }
  int findMinimumIndex(vector<int> &arr) {
    int low = 0;
    int high = arr.size() - 1;
    int minimumIndex = 0;
    if (arr[low] <= arr[high]) {
      return 0;
    }
    int minimum = arr[low];
    while (low <= high) {

      int mid = low + (high - low) / 2;
      if (arr[low] <= arr[mid]) {
        if (arr[low] <= arr[minimumIndex]) {
          minimumIndex = low;
          low = mid + 1;
        } else
          low = mid + 1;
      } else if (arr[mid] <= arr[high]) {
        if (arr[mid] <= arr[minimumIndex]) {
          minimumIndex = mid;
          high = mid - 1;
        } else
          high = mid - 1;
      }
    }
    return minimumIndex;
  }
  int singleNonDuplicate(vector<int> &nums) {
    int low = 0;
    int high = nums.size() - 1;
    if (nums.size() == 1)
      return nums[0];
    if (nums[0] != nums[1])
      return nums[0];
    if (nums[high] != nums[high - 1])
      return nums[high];
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
        return nums[mid];
      if ((nums[mid - 1] == nums[mid] && mid % 2 == 0) ||
          (nums[mid] == nums[mid + 1] && mid % 2 != 0)) {
        high = mid - 1;
      } else if ((nums[mid] == nums[mid - 1] && mid % 2 != 0) ||
                 (nums[mid] == nums[mid + 1] && mid % 2 == 0)) {
        low = mid + 1;
      }
    }
  }
  int findPeakElement(vector<int> &nums) {
    int index = 0;
    int low = 0;
    int high = nums.size() - 1;
    if (nums.size() == 1)
      return 0;
    if (nums[0] > nums[1])
      return 0;
    if (nums[high] > nums[high - 1])
      return high;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (mid == 0 && nums[mid] < nums[mid + 1])
        return mid + 1;
      else if (mid == nums.size() - 1 && nums[mid] < nums[mid - 1])
        return mid - 1;
      else if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
        return mid;
      } else if (nums[mid] > nums[mid - 1] && nums[mid] < nums[mid + 1]) {
        low = mid + 1;
      } else if (nums[mid] > nums[mid + 1] && nums[mid] < nums[mid - 1]) {
        high = mid - 1;
      } else if (nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1]) {
        low = mid + 1;
      }
    }
    return 1;
  }
  long long int floorSqrt(long long n) {
    long long int low = 1;
    long long int high = n;
    while (low <= high) {
      long long int mid = low + (high - low) / 2;
      if (mid * mid == n)
        return mid;
      else if (mid * mid <= n)
        low = mid + 1;
      else if (mid * mid >= n)
        high = mid - 1;
    }
    return 1;
  }
};

auto init = []() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  return 'c';
}();

int main() {
  long long int num;
  cin >> num;
  Solution sol;
  int ans = sol.floorSqrt(num);
  cout << ans;
}
