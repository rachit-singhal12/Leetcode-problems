class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0,k=0;
        string str="";
        while(i<word1.length()&&j<word2.length())
        {
            str = str + word1[i];
            k++;
            str = str + word2[j];
            i++;
            j++;
            k++;
        }
        while(i<word1.length())
        {
            str = str + word1[i];
            i++;
        }
        while(j<word2.length())
        {
            str = str + word2[j];
            j++;
        }
        return str;
    }
}; 