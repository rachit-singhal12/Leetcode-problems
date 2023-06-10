class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int temp1=0,temp2=0;
        for(auto x : nums)
        {
            temp1 = temp1+x;
            while(x>0)
            {
                temp2 = temp2 + x%10;
                x/=10;
            }
        }
        return abs(temp1-temp2);
    }
};