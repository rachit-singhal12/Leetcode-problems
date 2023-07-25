class Solution {
public:
    string removeTrailingZeros(string num) {
        int location=-1;
        for(int i=num.length()-1;i>=0;i--)
        {
            if(num[i]!='0')
            {
                location  = i;
                break;
            }
        }
        string str="";
        for(int i=0;i<=location;i++)
        {
            str=str+num[i];
        }
        return str;
    }
};