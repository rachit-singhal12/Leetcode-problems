class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>v;
        string str="";
        for(auto x:words)
        {
            str="";
            for(auto j=0;j<x.length();j++)
            {
                if(x[j]!=separator)
                {
                    str+=x[j];
                    if(j==x.length()-1 && str!="")
                    {
                        v.push_back(str);
                        str="";
                    }
                }
                else{
                    if(str!="")
                v.push_back(str);
                str="";
                }
            }
        }
        return v;
    }
};