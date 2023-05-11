class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum=0;
        vector<int>v;
        for(int i=0;i<grid.size();i++)
        {
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i=0;i<grid[0].size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                v.push_back(grid[j][i]);
            }
            sort(v.begin(),v.end());
            sum = sum+v[v.size()-1];
            v.clear();
        }
        return sum;
    }
};