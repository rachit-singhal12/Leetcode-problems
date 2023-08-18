class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0,count0 = 0,count2 =0 ;
        for(auto x : nums)
        {
            if(x == 0)count0++;
            else if(x == 1)count1++;
            else count2++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<count0)nums[i]=0;
            else if(i<count0+count1)nums[i]=1;
            else nums[i]= 2;
        }
    }
};