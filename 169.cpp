class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>m;
      for(auto x : nums)
      m[x]++;
      int s;
      if(nums.size()%2==0)
      s = nums.size()/2;
      else
      s = (nums.size()/2)+1;
      for(auto x : m)
      if(x.second>=s)return x.first;
      return -1;
    }
};