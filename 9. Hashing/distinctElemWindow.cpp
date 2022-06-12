#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    void countDistinctEleminWindow(vector<int> arr1, int k)
    {
        unordered_map<int, int> map1;
        for (int i = 0; i < k; i++)
        {
            map1[arr1[i]]++;
        }
        cout << map1.size() << endl;
        for (int i = k; i < arr1.size(); i++)
        {
            map1[arr1[i-k]] --;
            if (map1[arr1[i-k]] == 0)
                map1.erase(arr1[i - 1]);
            if (map1[arr1[i]] != 0)
                map1[arr1[1]]++;
            cout << map1.size() << endl;
        }
    }
};

int main()
{
    Solution s = Solution();
    vector<int> arr = {10, 20, 10, 10, 30, 40};
    int k = 4;
    s.countDistinctEleminWindow(arr, k);
}