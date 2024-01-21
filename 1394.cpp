class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>m;
        int ele=-1;
        for(auto x : arr)m[x]++;
        for(auto x : m)
        {
            if(x.first==x.second)
            {
                ele = x.first;
            }
        }
        return ele;
    }
};