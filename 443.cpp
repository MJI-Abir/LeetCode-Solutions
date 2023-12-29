#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int compress(vector<char> &chars) {
    int count = 1;
    int j = 1;
    for (int i = 1; i < chars.size(); i++) {
      if (chars[i] == chars[i - 1]) {
        count++;
      } else {
        chars[j] = (char)count;
        j++;
        chars[j] = chars[i];
        count = 1;
      }
    }
    chars.erase(chars.end() - chars.size() + j + 1, chars.end());
    return j + 1;
  }
};

int main() {
  vector<char> chars = {'a', 'a', 'a', 'b', 'b', 'c', 'c', 'c'};
  Solution solution;
  cout << solution.compress(chars) << endl;
  for (char c : chars) {
    cout << "\"" << c << "\""
         << ", ";
  }
  cout << endl;
  return 0;
}