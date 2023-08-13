class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0,temp=0;
        for(auto x : sentences)
        {
            count=0;
            string str="";
            stringstream ss(x);
            while(ss>>str)count++;
            if(count>temp)temp = count;
        }
        return temp;
    }
};