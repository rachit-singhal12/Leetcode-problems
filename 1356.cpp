class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        int n;
        for(int i=0;i<arr.size();i++)
        {
            int count =0;
            n = arr[i];
            while(n)
            {
                if((n&1)==1)
                count++;
                n = n>>1;
            }
            v.push_back({count,arr[i]});
        }
        sort(v.begin(),v.end());
        vector <int> v1;
        for(int i=0;i<arr.size();i++)
        {
            v1.push_back(v[i].second);
        }
        return v1;
    }
};