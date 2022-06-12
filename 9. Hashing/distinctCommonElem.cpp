#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution{
    public:
    int distinctCommonElement(vector<int> arr1, vector<int> arr2){
        unordered_set<int> set1;
        int count = 0;
        int m = arr1.size(); int n = arr2.size();
        for (int i = 0; i < m; i++){
            set1.insert(arr1[i]);
        }
        for (int i = 0; i < n; i++){
            if (set1.find(arr2[i]) != set1.end()){
                count ++ ;
                set1.erase(arr2[i]);
            }
        }
        return count ;
    }
};

int main(){
    Solution s = Solution();
    int ans = s.distinctCommonElement({1,2,3,4}, {2,3,4,5});
    cout << ans << endl;
}