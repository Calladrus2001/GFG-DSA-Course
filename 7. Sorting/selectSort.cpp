#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// in selectionSort, we continously select the min element.

class Solution {
    public:
    vector<int> selectSort(vector<int> arr){
        for (int i = 0; i < arr.size(); i++){
            int minidx = i;
            for (int j = i + 1; j < arr.size(); j++){
                if (arr[minidx] > arr[j]){
                    minidx = j;
                    swap(arr[minidx], arr[i]);
                }
            }
        }
        return arr;
    }
};

int main(){
    Solution s = Solution();
    vector<int> arr1 = {5,4,3,2,1};
    vector<int> arr = s.selectSort(arr1);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}