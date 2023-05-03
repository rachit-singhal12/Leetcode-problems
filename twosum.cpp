#include<iostream>
#include<vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        for(auto i =nums.begin();i!=nums.end();++i)
        {
            auto result = find(i+1,nums.end(),target-*i);
                if(result!=nums.end())
                {
                    v.push_back(i-nums.begin());
                    v.push_back(result-nums.begin());
                    break;
                }
        }
             return v;
        }
};