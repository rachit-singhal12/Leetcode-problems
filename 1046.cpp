class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int n = 0;
        for(auto x : stones)
        pq.push(x);
        while(!pq.empty())
        {
            if(pq.size()==1)
            return pq.top();
            int e1 = pq.top();
            pq.pop();
            int e2 = pq.top();
            pq.pop();
            if(e1 != e2)
            {
                pq.push(e1-e2);
            }
            else {
                n=0;
            }
        }
        return n;
    }
};