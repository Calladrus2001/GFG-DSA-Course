#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool isPalindrome(string s, int start, int end);
    string s = "abbcbba";
    bool res = isPalindrome(s,0,s.length()-1);
    cout << res << endl;
}

bool isPalindrome(string s, int start, int end)
{
   if (start >= end){
       return true;
   }
   else {
       if (s[start] == s[end]){
           return isPalindrome(s, start + 1, end - 1);
       }
       else {
           return false;
       }
   }
}