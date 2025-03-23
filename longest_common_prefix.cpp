#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        string longestCommonPrefix(vector<string>& str) {
            string pre;
            if(str.empty()==true)
            {
                return "";
            }
            pre=str[0];
            for(int i=1;i<str.size();i++)
            {
                while (str[i].find(pre)!=0)
                {
                    pre=pre.substr(0,pre.size()-1);
                }
            }
    
            return pre;
        }
    };