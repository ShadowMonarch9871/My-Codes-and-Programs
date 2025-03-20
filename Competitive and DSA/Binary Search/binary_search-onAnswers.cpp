#include <bits/stdc++.h>
#include <cinttypes>
using namespace std;
class Solution {
public:
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
  int multiple(int n, int number, int m) {
    int temp = number;
    for (int i = 1; i <= n; i++) {
      number *= temp;
      if (number > m)
        break;
    }
    return number;
  }
  int NthRoot(int n, int m) {
    if (m == 1)
      return 1;
    int low = 1;
    int high = m;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      int number = multiple(n, mid, m);
      if (number == m)
        return mid;
      else if (number <= m)
        low = mid + 1;
      else if (number >= m)
        high = mid - 1;
    }
    return -1;
  }
};

auto init = []() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  return 'c';
}();

int main() {
  int num;
  int m;
  cin >> m >> num;
  Solution sol;
  int ans = sol.NthRoot(m, num);
  cout << ans;
}
