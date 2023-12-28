#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string &s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        int i=0;
        int j=s.size()-1;
        while (i<j){
            if(vowels.count(s[i]) == 0) i++;
            else if(vowels.count(s[i]) > 0 && vowels.count(s[j]) > 0){
                cout<<s[i]<<" "<<s[j]<<endl;
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(vowels.count(s[j]) == 0) j--;
        }
        return s;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution solution;
    cout<<solution.reverseVowels(s)<<endl;
    return 0;
}