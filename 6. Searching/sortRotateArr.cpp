#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution{
    public:
    int linear(vector<int> arr, int start, int end, int target){
        for (int i = start; i < end; i++){
            if (arr[i] == target){
                return i;
            }
        }
        return -1;
    }
    int searchInSortedRotatedArray(vector<int> arr, int target){
        int start = 0;
        int end = arr.size() - 1;
        int mid;
        while (start <= end){
            mid = floor((start+end)/2);
            if (arr[mid] == target){
                break;
            }
            // checking to see if left half is sorted
            else if (arr[start] < arr[mid] ){
                if(target > arr[start]){
                    end = mid -1 ;
                }
                else {
                    start = mid + 1;
                    return linear(arr, start, end, target);
                }
            }
            // if left half is not sorted, then right half is sorted
            else {
                if (target < arr[end]){
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                    return linear(arr, start, end, target);
                }
            }
        }
        return mid;
    }
};

int main(){
    Solution s = Solution();
    vector<int> arr = {100,200,300,10,20};
    int ans = s.searchInSortedRotatedArray(arr, 20);
    cout << ans << endl;
}