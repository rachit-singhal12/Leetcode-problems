class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int low=0,high=mat[0].size()-1,sum=0;
        while(high>=0)
        {
            if(low==high)
            {
                sum=sum+mat[low][low];
            }
            else
            {
                sum=sum+mat[low][low] + mat[low][high];
            }
            high--;
            low++;
        }
        return sum;
    }
};