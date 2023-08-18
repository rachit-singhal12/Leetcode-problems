class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*unordered_map<int,int>m;
        for(auto n : nums)m[n]+=1;
        for(auto x : m)if(x.second>1)return x.first;
        return -1;
        */

        vector<int>temp(nums.size(),0);
        for(auto x : nums)
        {
            temp[x]++;
        }
        for(int i=0;i<temp.size();i++)if(temp[i] > 1)return i;
        return -1;
    }
};