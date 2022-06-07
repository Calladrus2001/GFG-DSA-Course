//given a sorted array and a sum, find if there exists a pair with the given sum
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> findSum(vector<int> arr, int target){
        int start = 0;
        int end = arr.size() -1 ;
        int sum;
        while (start < end){
            sum = arr[start] + arr[end];
            if (sum == target){
                break;
            }
            else if (sum > target){
                end -= 1;
            }
            else {
                start += 1;
            }
        }
        return vector<int> {start, end};
    }
};

int main(){
    Solution s = Solution();
    vector<int> arr = {6,7,8,9,10};
    vector<int> ans = s.findSum(arr, 16);
    cout << ans[0] << " " << ans[1] << endl;
}