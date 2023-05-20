class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>s;
        int count=0;
        for(auto x : nums)s.insert(x);
        priority_queue<int,vector<int>, greater<int> >pq;
        for(auto x : s)
        pq.push(x);
        for(int i=0;i<s.size();i++)
        {
            if(pq.top()>0){
                count++;
            }
            pq.pop();
        }
        return count;
    }
};