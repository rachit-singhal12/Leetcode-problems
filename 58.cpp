class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        string c = " ";
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i] == c[0] &&count>0)
            {
                break;
            }
            else if(s[i]!=c[0])
            count++;
        }
        return count;
    }
};