#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> result(nums.size());
    vector<int> prefix(nums.size() + 1, 1);
    vector<int> postfix(nums.size() + 1, 1);
    int postfixPointer = postfix.size() - 2;
    for (int prefixPointer = 1; prefixPointer < prefix.size();
         prefixPointer++) {
      prefix[prefixPointer] =
          prefix[prefixPointer - 1] * nums[prefixPointer - 1];
      postfix[postfixPointer] =
          postfix[postfixPointer + 1] * nums[postfixPointer];
      postfixPointer--;
    }
    for (int i = 0; i < nums.size(); i++) {
      result[i] = prefix[i] * postfix[i + 1];
    }
    return result;
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
  vector<int> ans = solution.productExceptSelf(nums);
  for (int element : ans) {
    cout << element << " ";
  }
  cout << endl;
  return 0;
}