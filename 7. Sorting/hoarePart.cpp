#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int hoarePart(vector<int> arr, int low, int high){
        int p = arr[low];
        int i = low; int j = high;
        while (true){
            while (arr[i] < p){
                i ++ ;
            }
            while (arr[j] > p){
                j -- ;
            }
            if (i>=j){
                return j;
            }
            swap(arr[i], arr[j]);

        }
    }

};

//wrong output

int main(){
    Solution s = Solution();
    vector<int> arr = {5,3,8,4,2,7,1,10};
    int p = s.hoarePart(arr,0,arr.size()-1);
    cout << p << endl;
}