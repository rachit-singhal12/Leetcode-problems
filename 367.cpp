class Solution {
public:
    bool isPerfectSquare(int num) {
        int d = sqrt(num);
        if(d*d==num)return true;
        else return false;
    }
};