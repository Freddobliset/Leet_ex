#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int c=0,k=0;
    
            if(digits[digits.size()-1]!=9)
            {
                digits[digits.size()-1]+=1;
            }else{
            for(int i=digits.size()-1;i>=0;--i)
            {
                if(digits[i]==0)
                {
                    k++;
                }
                else if(digits[i]==9)
                {
                    digits[i]=0;
                    c++;
                }
                else if(digits[i]!=9&&digits[i]!=0)
                    break;
            }
            if(k==digits.size())
            {
                 digits[k-1]+=1;
            }
            else if(c==digits.size())
            {
                digits[0]=1;
                digits.push_back(0);
            }
            else{
            digits[digits.size()-1-c]+=1;
            }
            }
            return digits;
        }
    };