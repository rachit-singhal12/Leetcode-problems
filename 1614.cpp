class Solution {
public:
    int maxDepth(string s) {
        int maxis = 0,maxi=0;
        for(auto x : s)
        {
            maxis+=x=='(';
            maxis-=x==')';
            maxi = max(maxis,maxi);
        }
        return maxi;
    }
};