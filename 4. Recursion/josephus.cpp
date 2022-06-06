// Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed direction.
// The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, you are the last one remaining and survive.

#include <iostream>
using namespace std;

class Solution
{
    public:
    int josephus(int n, int k)
    {
        if (n <=1){
            return n;
        }
    }
};

int main(){
    Solution s = Solution();
    int n = 4; int k = 2;
    int ans = s.josephus(n,k);
    cout << ans << endl;
}