class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int i=0,count = 1;
        int temp = candies;
        vector<int> v(num_people,0);
        while(candies>0)
        {
            v[i%num_people]+=min(count,candies);
            candies-=count;
            i++;
            count++;
        }
        return v;
    }
};