class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>m;
        for(auto x : words)
        {
            for(auto y : x)
            m[y]++;
        }
        for(auto x : m)
        if(x.second%words.size()!=0)return false;
        return true;
    }
};