class Solution {
public:
bool ch(string str)
{
    int s = 0,e = str.size()-1;
    while(s<=e){
        if(str[s] != str[e])return 0;
        else{
            s++;
            e--;
        }
    }
    return 1;
}
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i<words.size(); i++){
            if(ch(words[i]))return words[i];
        }
        return "";
    }
};