class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m,j=0,k=0;
        while(j<n)
        {
            nums1[i] = nums2[j];
            j++;
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};