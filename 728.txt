class Solution {
public:
    bool num(int n)
    {
        int temp = n;
        while(n>0)
        {
            if(n%10==0)return false;
            if((temp%(n%10))!=0)return false;
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++)
        {
            if(num(i)==1)v.push_back(i);
        }
        return v;
    }
};