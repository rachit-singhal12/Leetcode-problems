class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int count=0;
        for(int i=0;i<mat.size();i++)
        {
            count=0;
            for(int j=0;j<mat[i].size();j++)
            if(mat[i][j]==1)count++;
            pq.push({count,i});
        }
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};