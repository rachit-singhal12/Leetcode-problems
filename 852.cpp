class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int strt=0,end=arr.size()-1;
        int mid = (strt+end)/2;
        while(strt<end)
        {
            if( arr[mid]<arr[mid+1])
            strt=mid+1;   
            else
            {
                end = mid;
            }
            mid = strt + (end-strt)/2;
        }
        return strt;
    }
};