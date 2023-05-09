class Solution {
public:
    bool isAnagram(string a, string b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout<<a<<" "<<b<<endl;
        if(a.length()==b.length())
        {
            for(int i=0;i<a.length();i++)
            {
                if(a[i]!=b[i])
                {
                    return false;
                }
            }
            return true;
        }
        else
        {
            return false;
        } 
    }
};