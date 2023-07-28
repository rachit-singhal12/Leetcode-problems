class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int ts=0;
        for(auto x : nums)ts+=x;
        int getsum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(getsum == (ts-getsum-nums[i]))
            return i;
            getsum+=nums[i];
        }
        return -1;
    }
};