class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[](auto a,auto b){
            return a>b;
        });
        for(int i=0;i<arr.size()-1;i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==(2*arr[j])||(2*arr[i]==arr[j]))
                return true;
            }
        }
        return false;
    }
};