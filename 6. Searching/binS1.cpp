// used for sorted array. (Iterative)
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int binarySearch(vector<int> arr, int n, int target)
    {
        int start = 0;
        int end = n - 1;
        while (start <= end){
            int mid = floor((start + end)/2);
            if (arr[mid] == target){
                return mid;
            }
            else if (arr[mid] > target){
                end = mid - 1;
            }
            else if (arr[mid] < target){
                start = mid + 1;
            }
        }
        return -1 ;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();
    int target = 5;
    int ans = s.binarySearch(arr, n, target);
    cout << ans << endl;
}