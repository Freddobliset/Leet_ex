#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            string s=to_string(x);
            string s2;
            for(int i=s.size()-1;i>=0;i--)
            {
                s2.push_back(s[i]);
            }
            if(s==s2)
            {
                return true;
            }
        return false;
        }
    };