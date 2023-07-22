class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int temp = int(coordinates[0]);
        int temp2 = int(coordinates[1])-48;
        if((temp%2==0&&temp2%2==0)||(temp%2!=0&&temp2%2!=0))
        return false;
        else
        return true;
    }
};