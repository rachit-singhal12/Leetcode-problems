class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]+=1;
        }
        int check = m.at(s[0]);
        int count=0;
        for(auto x : m)
        {
            if(x.second!=check)
            {
                count=1;
                break;
            }
        }
        if(count==0)return true;
        else return false;
    }
};