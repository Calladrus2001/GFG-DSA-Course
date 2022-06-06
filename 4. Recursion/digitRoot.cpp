#include <iostream>
using namespace std;

class Solution
{
public:
    // Complete this function
    int sum = 0;
    int sumOfDigit(int n){
    if (n == 0){
        return sum;
    }
    else {
        sum += n%10;
        n = n/10;
        return sumOfDigit(n);
    }
    
}
    int digitalRoot(int val)
    {
       if (val <= 9){
           return val;
       }
       else{
           sum = 0;
           val = sumOfDigit(val);
           return digitalRoot(val);
       }
    }
};

int main()
{
    Solution s = Solution();
    int n = 9999;
    int res = s.digitalRoot(n);
    cout << res << endl;
}