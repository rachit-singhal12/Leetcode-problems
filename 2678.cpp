class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0,str;
        for(int j=0;j<details.size();j++)
        {
            str=0;
            str=str+(int(details[j][11])-48);
            str=str*10+(int(details[j][12])-48);
            if(str>60)count++;
        }
        return count;
    }
};