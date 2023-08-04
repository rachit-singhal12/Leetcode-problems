class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size()-1,starting = 0;
        while(starting<=size)
        {
            swap(matrix[starting],matrix[size]);
            starting++;
            size--;
        }
        for(int index = 0;index<matrix.size();index++)
        {
            int j=index;
            for(int i=index;i<matrix.size();i++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};