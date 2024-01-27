class Solution {
public:
    string reverseWords(string s) {
        string str="",temp="";
        stringstream ss(s);
        while(ss>>temp)
        {
            reverse(temp.begin(),temp.end());
            str+=temp+" ";
        }
        if (!str.empty()) {
            str.pop_back();
        }
        return str;
    }
};