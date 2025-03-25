#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int strStr(string haystack, string needle) {
            int k=0;
            bool flag=false;
            if(haystack.size()<needle.size())
            {
                return -1;
            }
            if(haystack.size()==needle.size()&&haystack==needle)
            {
                return 0;
            }
            for(int i=0;i<haystack.size()&&flag==false;i++)
            {
                k=-1;
                if(haystack.size()-i<needle.size())
                {
                    return -1;
                }
                for(int l=0;l<needle.size();l++)
                {
                  if(haystack[i+l]==needle[l])
                  {
                    flag=true;
                    k=i;
                  }   else {
                    flag=false;
                    break;
                  }
                }
            }
            return k;
        
        }
    };
    