class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v;
        vector<string>v1;
        for(int i=0;i<names.size();i++)
        {
            v.push_back(make_pair(heights[i],names[i]));
        }
        sort(v.begin(),v.end(),[&](auto a,auto b){return a>b;});
        for(int i=0;i<v.size();i++)
        {
            v1.push_back(v[i].second);
        }
        return v1;
    }
};