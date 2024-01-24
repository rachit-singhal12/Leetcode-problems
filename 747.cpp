class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=-1;
        int smax=-1;
        int in = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(max<nums[i]){
            smax = max;
            max = nums[i];
            in = i;
            }
            else if(smax<nums[i]){
                smax = nums[i];
            }
        }
        if(smax*2<=max)return in;
        else return -1;
    }
};