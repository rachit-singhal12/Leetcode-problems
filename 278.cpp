// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        return f(1,n);
    }

    int f(int s,int e)
    {
        if(s==e)return s;
        int m = s+(e-s)/2;
        if(isBadVersion(m))return f(s,m);
        return f(m+1,e);
    }
};