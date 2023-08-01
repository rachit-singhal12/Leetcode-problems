class Solution {
public:
    bool isPalindrome(string s) {
       string str="";
       for(int i=0;i<s.length();i++)
       {
           if(tolower(s[i])>='a' && tolower(s[i])<='z'||s[i]>='0' && s[i]<='9')
           str+=tolower(s[i]);
       }
       cout<<str;
        int high = str.length()-1,low=0;
        while(high>low)
        {
            if(str[high]!=str[low])return false;
            high--;
            low++;
        }
        return true;
    }
};