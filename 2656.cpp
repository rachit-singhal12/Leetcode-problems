class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),[](int a,int b){return a>b;});
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum  =sum + nums[0];
            nums[0]+=1;
        }
        return sum;
    }
}; 