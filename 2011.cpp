class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        string s,s1="+";
        int x=0;
        for(int i=0;i<operations.size();i++)
        {
            s=operations[i];
            if(s[1]==s1[0])x++;
            else x--;
        }
        return x;
    }
};