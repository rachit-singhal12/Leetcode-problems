
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l=-1;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]==ch)
            {
                l=i;
                break;
            }
        }
        string str="";
        for(int i=l;i>=0;i--)
        {
            str=str+word[i];
        }
        for(int i=l+1;i<word.length();i++)
        {
            str=str+word[i];
        }
        return str;
    }
};