class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int temp;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==0)
            {
                temp = arr.size()-1;
                while(temp>i+1)
                {
                    arr[temp]=arr[temp-1];
                    temp--;
                }
                arr[i+1]=0;
                i++;
            }
        }
    }
};