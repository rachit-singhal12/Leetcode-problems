class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="",str2="";
        for(auto x  : word1)str1+=x;
        for(auto x : word2)str2+=x;
        if(str1.length()!=str2.length())return false;
        for(int i=0;i<str1.length();i++)if(str1[i]!=str2[i])return false;
        return true;
    }
};