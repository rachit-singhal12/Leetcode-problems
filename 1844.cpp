class Solution {
public:
    string replaceDigits(string s) {
       for(int i=0;i<s.length();i++)
       {
           if(isdigit(s[i]))
           {
               s[i]=(s[i-1]+(int(s[i])-48));
           }
       }
       return s;
    }
};