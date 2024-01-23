class Solution {
public:
    double average(vector<int>& salary) {
        int min=INT_MAX,max=-1;
        for(auto x : salary)
        {
            if(x>max)max=x;
            if(x<min)min=x;
        }
        int sum = 0;
        for(auto x : salary)
            if(x!=min && x!=max)
                sum+=x;
        double ans = (double)sum/(salary.size()-2);
        return ans;
    }
};