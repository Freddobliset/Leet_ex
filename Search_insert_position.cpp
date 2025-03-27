#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            
           int l=0,h=nums.size()-1;
    
           if(target>nums[nums.size()-1])
           {
            return nums.size();
           }
           while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target)
                return m;
            
            if(nums[m]<target)
                l=m+1;
    
            else 
                h=m-1;
           }
            return l;
        }
    };