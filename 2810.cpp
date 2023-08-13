class Solution {
public:
    string finalString(string s) {
        string str="";
        for(auto x :  s)
        {
            if((x)!='i')str+=x;
            else
            {
                reverse(str.begin(),str.end());
            }
        }
        return str;
    }
};