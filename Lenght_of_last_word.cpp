#include<iostream>
using namespace std;
class Solution {
    public:
        int lengthOfLastWord(string s) {
            int c=0,t=0;
            bool charFound = false;
            if(s.size()==0||s.size()==1)
            {
                return s.size();
            }
            for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] != ' ') {
                charFound=true;
                c++;
            } else if (charFound) {
                break;  
            }
        }
         return c;
        }
    };