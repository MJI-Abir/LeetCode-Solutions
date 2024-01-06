#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isSubsequence(string s, string t) {
    int sPointer = 0;
    if (s.size() == 0)
      return true;
    for (int tPointer = 0; tPointer < t.length(); tPointer++) {
      if (s[sPointer] == t[tPointer]) {
        cout << s[sPointer] << " " << t[tPointer] << endl;
        sPointer++;
        if (sPointer == s.size())
          return true;
      }
    }
    return false;
  }
};

int main() {
  string s, t;
  cin >> s >> t;
  Solution solution;
  cout << solution.isSubsequence(s, t) << endl;
  return 0;
}