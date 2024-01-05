#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  string gcdOfStrings(string str1, string str2) {
    // Check if they have non-zero GCD string.
    if(str1 + str2 != str2 + str1){
      return "";
    }
    // Get the gcd of the two lengths
    int gcdLength = gcd(str1.size(), str2.size());
    return str1.substr(0, gcdLength);
  }
};

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  Solution solution;
  cout << solution.gcdOfStrings(s1, s2) << endl;
  return 0;
}
