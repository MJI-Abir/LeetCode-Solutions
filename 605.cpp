#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0){
                bool emptyLeftSlot = (i == 0) || (flowerbed[i-1] == 0);
                bool emptyRightSlot = (i == flowerbed.size() - 1) || (flowerbed[i+1] == 0);

                if (emptyLeftSlot && emptyRightSlot){
                    flowerbed[i] = 1;
                    count++;
                }
            }
            
        }
        return count >= n;
    }
};

int main()
{
    int x, size, n;
    vector<int> flowerbed;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        flowerbed.push_back(x);
    }
    cin >> n;

    Solution solution;
    if (solution.canPlaceFlowers(flowerbed, n))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}
