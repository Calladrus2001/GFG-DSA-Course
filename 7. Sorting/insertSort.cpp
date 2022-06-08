#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> insertSort(vector<int> arr)
    {
        for (int i = 1; i < arr.size(); i ++){
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
        return arr;
    }
};

int main(){
    Solution s = Solution();
    vector<int> arr = {1,3,4,2,5};
    vector<int> soln = s.insertSort(arr);
     for (int i = 0; i < soln.size(); i++){
        cout << soln[i] << " ";
    }
}