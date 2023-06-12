class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp1 = nums[0],temp2 = nums[nums.size()-1];
        for(int i=min(temp1,temp2);i>0;i--)
        {
            if(temp1%i==0&&temp2%i==0)return i;
        }
        return -1;
    }
};