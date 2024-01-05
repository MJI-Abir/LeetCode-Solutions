#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int compress(vector<char> &chars) {
    int i = 0, compressedStringPointer = 0;
    while (i < chars.size()) {
      int groupLength = 1;

      while (i + groupLength < chars.size() &&
             chars[i + groupLength] == chars[i]) {
        groupLength++;
      }
      chars[compressedStringPointer++] = chars[i];
      if (groupLength > 1) {
        for (char character : toString(groupLength)) {
          chars[compressedStringPointer++] = character;
        }
      }
      i += groupLength;
    }
    return compressedStringPointer;
  }
};

int main() {
  vector<char> chars = {'a'};
  Solution solution;
  cout << solution.compress(chars) << endl;
  for (char c : chars) {
    cout << "\"" << c << "\""
         << ", ";
  }
  cout << endl;
  return 0;
}