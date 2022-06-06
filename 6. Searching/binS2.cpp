#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int binarySearch(vector<int> arr, int start, int end, int target)
    {
        int mid = floor((start+end)/2);
        if (start > end){
            return -1;
        }
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] > target){
            start = mid + 1;
            return binarySearch(arr, start, end, target);
        }
        else {
            end = mid - 1;
            return binarySearch(arr, start, end, target);
        }

    }
};

int main()
{
    Solution s = Solution();
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();
    int target = 10;
    int ans = s.binarySearch(arr, 0, n, target);
    cout << ans << endl;
}