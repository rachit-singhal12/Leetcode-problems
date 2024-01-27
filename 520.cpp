class Solution {
public:
    bool detectCapitalUse(string word) {
        int small=0,large=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>=65&&word[i]<=91)
            {
                large++;
            }
            else
            {
                small++;
            }
        }
        if(large==0&&small==word.size() || large==word.size()&&small==0)return true;
        else if(word[0]>=65&&word[0]<=91&&  large==1)return true;
        else return false;
    }
};