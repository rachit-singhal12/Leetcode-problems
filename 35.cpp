class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int num=-1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==target)
            {
                num = i;
            }
            else if(nums[i]<target && nums[i+1]>target)
            num=i+1;
        }
        if(target == nums[nums.size()-1])num = nums.size()-1;
        if(num==-1 && target>nums[nums.size()-1])num = nums.size();
        else if(num==-1) num=0;
        return num;
    }
};