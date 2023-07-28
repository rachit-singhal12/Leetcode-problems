class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int j=-1;
        for(int i=0;i<nums.size();i++){
				if(nums[i]){
					if(i-j-1>=k || j==-1) j=i;
					else return false;
				}
			}
        return true;
    }
};