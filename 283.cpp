#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int i = 0, lastNonZeroFoundAtIndex = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0 && lastNonZeroFoundAtIndex <= i) {
        swap(nums[i], nums[lastNonZeroFoundAtIndex]);
        lastNonZeroFoundAtIndex++;
      }
    }
  }
};

int main() {
  vector<int> nums;
  int n, x;
  cin >> n;
  while (n--) {
    cin >> x;
    nums.push_back(x);
  }
  Solution solution;
  solution.moveZeroes(nums);
  for (int element : nums) {
    cout << element << " ";
  }
  cout << endl;

  return 0;
}