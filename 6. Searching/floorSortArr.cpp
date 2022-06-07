#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
    public:
    int findFloor(vector<long long> arr, long long n, long long x){
        int index = -1;
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] == x) return mid;
            else if(arr[mid] > x)
                high = mid-1;
            else{
                low = mid+1;
                index = mid;
            }
        }
        return index;
    }
};

int main(){
    Solution s = Solution();
    vector<long long> arr = {1,2,8,10,11,12,19};
    cout << s.findFloor(arr, arr.size(), 5) << endl;
}