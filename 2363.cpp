class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>m1;
        vector<vector<int>>v;
        for(auto x : items1)m1[x[0]]+=x[1];
        for(auto x : items2)m1[x[0]]+=x[1];
        for(auto x: m1)
        v.push_back({x.first,x.second});
    return v;
    }
};