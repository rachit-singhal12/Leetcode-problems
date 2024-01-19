class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int mul = 1;
        int flag=0;
        for(auto i : nums)
        if(i==0)
        {
            flag++;
            continue;
        }
        else
        mul*=i;
        if(flag==1)
        {
            for(auto i=0;i<nums.size();i++)
            {
                if(nums[i]==0)nums[i]=mul;
                else
                nums[i] = 0;
            }
        }
        else if(flag>1)
        {
            for(auto i=0;i<nums.size();i++)
            nums[i] = 0;
        }
        else
        for(auto i=0;i<nums.size();i++)
        {
            if(nums[i]==0)nums[i]=mul;
            else
            nums[i] = mul/nums[i];
        }
        return nums;
    }
};