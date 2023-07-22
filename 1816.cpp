class Solution {
public:
    string truncateSentence(string s, int k) {
        string str="",space=" ";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==space[0])
            k--;
            if(k>0){
            str=str+s[i];
        }
        else break;
        }
        return str;
    }
};