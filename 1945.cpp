class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        for(int i=0;i<s.length();i++)
            temp=temp+to_string(s[i]-96);
        int sum;
        while(k>0)
        {
            sum=0;
            for(int i=0;i<temp.length();i++)
                sum+=(int(temp[i])-48);
            temp=to_string(sum);
            k--;
        }
        return sum;
    }
};