#include<iostream>
#include<vector>
using namespace std;

// this is NOT merge sort, just the unit case of it

class Solution{
    public:
     vector<int> merge2Sorted(vector<int> arr1, vector<int> arr2){
        int i = 0;int j = 0;
        vector<int> soln;
        int n = arr1.size(); int m = arr2.size();
        for (int x = 0; x < m + n; x ++){
            if (arr1[i] >= arr2[j]){
                soln.push_back(arr2[j]);
                j < m ? j++ : j;

            }
            else {
                soln.push_back(arr1[i]);
                i < n ? i ++ : i;
            }
        }
        return soln;
    }
    vector<int> merge(vector<int> arr, int low, int mid, int high){
        vector<int> left;
        vector<int> right;
        for (int i = 0; i <= mid; i ++){
            left.push_back(arr[low + i]);
        }
        for (int i = 0; i < high-mid; i++){
            right.push_back(arr[mid + 1 + i]);
        }
        return merge2Sorted(left, right);
    }
};

int main(){
    Solution s = Solution();
    vector<int> arr = {10,20,40,20,30};
    arr = s.merge(arr,0,2,4);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}