class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        int count=0;
        for(auto x : arr)
        {
            m[x]+=1;
        }
        set<int>st;
        for(auto x : m)
        {
            st.insert(x.second);
        }
        return st.size()==m.size();
    }
};