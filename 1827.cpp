class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])continue;
            else
            {
                sum+=(nums[i-1]-nums[i]+1);
                nums[i]+=(nums[i-1]-nums[i]+1);
            }
        }
        return sum;
    }
};