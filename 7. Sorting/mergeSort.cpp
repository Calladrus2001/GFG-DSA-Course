#include<iostream>
#include<vector>
using namespace std;

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

    vector<int> mergeSort(vector<int> arr, int low, int high){
        while (high > low){
            int mid = (low+high)/2;
            mergeSort(arr,low,mid);
            mergeSort(arr,mid + 1,high);
            merge(arr, low, mid, high);
        }
        return arr;
    }
};

int main(){
    Solution s = Solution();
    vector<int> arr = {10,5,3,15,7};
    arr = s.mergeSort(arr,0,4);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}