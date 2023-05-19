class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>v;
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(auto x : s)
        {
            v.push_back(x);
        }
        if(v.size()<3)
        return v[v.size()-1];
        else
        {
            return v[v.size()-3];
        }
    }
};