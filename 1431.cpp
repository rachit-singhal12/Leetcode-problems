class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int temp=0;
        vector<bool>b;
        for(int i=0;i<candies.size();i++)
        {
            if(temp<candies[i])temp=candies[i];
            candies[i] = candies[i] +extraCandies;
        }
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>=temp)b.push_back(true);
            else b.push_back(false);
        }
        return b;
    }
};