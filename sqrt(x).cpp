#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int mySqrt(int x) {
            if(x==0||x==1){
            return x;
            }
            int i;
            for(i=0;x>=0;i++)
            {
                x-=2*i+1;
            }
            return i-1;
        }
    };