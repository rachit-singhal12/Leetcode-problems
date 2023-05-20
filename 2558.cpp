class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>pq;
        long long sum=0;
        for(auto x : gifts)
        {
            pq.push(x);
        }
        for(int i=0;i<k;i++)
        {
            auto x = floor(sqrt(pq.top()));
            pq.pop();
            pq.push(x);
        }
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};