class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int flag=0;
        for(auto x : nums)
        {
            if(x!=val)
            {
                nums[flag] = x;
                flag++;
            }
        }
        return flag;
    }
};