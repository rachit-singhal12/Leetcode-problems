class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        map<int,int>m;
        priority_queue<pair<int,int>>pq;
        for(auto x : nums)m[x]++;
        for(auto i : m)
        {
            pq.push({i.second,i.first});
        }
         while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};