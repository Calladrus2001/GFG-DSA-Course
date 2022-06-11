#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
    vector<int> lomutoPartition(vector<int> arr, int low, int high){
        int p = arr[high];
        int i = low - 1;
        for (int j = low; j <= high -1; j++){
            if (arr[j] < p){
                i ++ ;
                swap(arr[i], arr[j]);
            }
        }
        swap (arr[i+1], arr[high]); 
        return arr;
    }
};

int main(){
    Solution s = Solution();
    vector<int> arr = {10,80,30,90,40,50,70};
    arr = s.lomutoPartition(arr, 0, arr.size()-1);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}