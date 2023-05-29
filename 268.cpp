class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ar=nums[0],n=0;
        for(int i=1;i<nums.size();i++)
            ar = ar^nums[i];
        for(int i=1;i<=nums.size();i++)
            n=n^i;
        return int(ar^n);
    }
};