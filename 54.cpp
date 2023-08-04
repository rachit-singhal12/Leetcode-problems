class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int total = matrix.size()*matrix[0].size();
        int count=0;
        int startingRow = 0,startingCol=0,endingRow = matrix.size()-1,endingCol= matrix[0].size()-1;

        while(count<total)
        {
            for(int i = startingCol;count<total &&i<=endingCol;i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            for(int i = startingRow;count<total && i<=endingRow;i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            for(int i = endingCol;count<total && i>=startingCol;i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            for(int i = endingRow;count<total && i>=startingRow;i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};