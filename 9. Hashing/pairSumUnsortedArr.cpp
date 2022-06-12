#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution{
    public:
    bool pairSumUnsorted(vector<int> arr, int target){
        unordered_set<int> set1;
        for (int i = 0; i < arr.size(); i++){
            if (set1.find(target - arr[i])!= set1.end()){
                return true;
            }
            else {
                set1.insert(arr[i]);
            }
        }
        return false;
    }
};

int main(){
    Solution s = Solution();
    bool ans = s.pairSumUnsorted({1,2,3,4,5},9);
    cout << ans << endl;
}