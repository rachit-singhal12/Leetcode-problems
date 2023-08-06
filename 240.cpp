class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0,col = matrix[0].size()-1;
        while(row<matrix.size() && col>=0)
        {
            int ele = matrix[row][col];
            if(ele==target)return 1;
            if(ele<target)row++;
            else col--;
        } 
        return 0;
    }
};