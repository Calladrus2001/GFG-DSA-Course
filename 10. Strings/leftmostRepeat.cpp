#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution
{
public:
    int leftmostRepeatChar(string s)
    {
        if (s.length() == 0)
        {
            return -1;
        }
        else if (s.length() == 1)
        {
            return 0;
        }
        map<char, int> map1;
        for (int i = 0; i < s.length(); i++)
        {
            map1[s[i]] == 0 ? map1[s[i]] = i : map1[s[i]] = -2;
            // cout << s[i] << " " << map1[s[i]] << endl;
        }
        map<char, int>::iterator itr;
        for (itr = map1.begin(); itr != map1.end(); itr++)
        {
            if (itr->second >= 0)
            {
                return itr->second;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s = Solution();
    int ans = s.leftmostRepeatChar("apple");
    cout << ans << endl;
}