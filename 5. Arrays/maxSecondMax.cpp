#include <iostream>
#include <vector>
using namespace std;

//Amazon

class Solution
{
public:
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[])
    {
        int max = arr[0];
        int max2 = -99;
        for (int i = 1; i < sizeOfArray; i++)
        {
            if (arr[i] > max)
            {
                max2 = max;
                max = arr[i];
            }
            else if (arr[i] <= max && arr[i] > max2)
            {
                max2 = arr[i];
            }
        }
        vector<int> ans = {max, max2};
        return ans;
    }
};

int main()
{
    Solution s = Solution();
    int arr[5] = {10,10,10,10,10};
    vector<int> ans = s.largestAndSecondLargest(5, arr);
    cout << ans[0] << " " << ans[1] << endl;
}