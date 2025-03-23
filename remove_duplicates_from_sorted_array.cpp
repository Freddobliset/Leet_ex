#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int er=0;
            vector<int> vec;
            for(int i=1;i<nums.size();i++)
            {
                    if(nums[i]!=nums[er])
                    {
                        er++;
                        nums[er]=nums[i];
                    }
            }
            return er+1;
        }
    };