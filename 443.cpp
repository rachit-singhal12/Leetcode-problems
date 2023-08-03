class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>v;
        int count = 1;
        for(int i=1;i<=chars.size();i++)
        {
            if(i < chars.size() && chars[i]==chars[i-1])
            {
                count++;
            }
            else
            {
                v.push_back(chars[i-1]);
                if(count>1)
                {
                    string str = to_string(count);
                    for(int j=0;j<str.length();j++)
                    v.push_back(str[j]);
                }
                count=1;
            }
        }
        chars = v;
        return v.size();
    }
};