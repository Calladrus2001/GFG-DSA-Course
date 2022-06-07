#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int low = 0;
        int high = 0;
        long long int sum = 0;
        vector<int> v;

        while (high <= n && low <= n)
        {
            if (sum == s)
            {
                v.push_back(low + 1);
                v.push_back(high);
                return v;
            }

            else if (sum < s)
            {
                sum = sum + arr[high++];
            }

            if (sum > s)
            {
                sum = sum - arr[low];
                low++;
            }
        }
        v.push_back(-1);
        return v;
    }
};

int main()
{
    Solution s = Solution();
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ans = s.subarraySum(arr, 10, 15);
    cout << ans[0] << " " << ans[1] << endl;
}