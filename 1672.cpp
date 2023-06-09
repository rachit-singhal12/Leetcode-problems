class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,temp=0;
        for(auto x : accounts)
        {
            sum=0;
            for(auto y : x)
            sum+=y;
            if(temp<sum)temp=sum;
        }
        return temp;
    }
};