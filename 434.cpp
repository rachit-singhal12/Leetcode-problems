class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string str;
        int count=0;
        while(ss>>str)count++;
        return count;
    }
};