#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
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
};

int main(){
    Solution s = Solution();
    vector<int> arr1 = {1,10,10};
    vector<int> arr2 = {2,10,10};
    vector<int> soln = s.merge2Sorted(arr1,arr2);
    for (int i = 0; i < soln.size(); i++){
        cout << soln[i] << " ";
    }
}
