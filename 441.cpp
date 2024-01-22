class Solution {
public:
    int arrangeCoins(int n) {
        int flag=0;
        while(n>=(flag+1))
        {
            n-=(flag+1);
            flag++;
        }
        return flag;
    }
};