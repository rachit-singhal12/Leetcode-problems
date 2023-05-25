class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](auto a,auto b){return a[1]>b[1];});
        int sum=0;
        for(auto x : boxTypes)
        {
            if(truckSize>0){
            if(truckSize>=x[0])
            {
                sum+=x[0]*x[1];
                truckSize = truckSize-x[0];
            }
            else
            {
                sum+=truckSize*x[1];
                truckSize=0;
            }
            }
            else break;
        }
        return sum;
    }
};