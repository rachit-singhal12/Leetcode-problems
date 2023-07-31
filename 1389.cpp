class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        for(int i=0;i<index.size();i++)
        {
            if(index[i]==i)continue;
            int temp = nums[i];
            for(int j=i;j>index[i];j--)
            {
                nums[j]=nums[j-1];
            }
            nums[index[i]] = temp;
        }
        return nums;
    }
};