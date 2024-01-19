class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int values=0,high=0;
        for(auto x : gain)
        {
            values = values + x;
            if(values > high) high = values;
        }
        return high;
    }
};