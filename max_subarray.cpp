#include<bits/stdc++.h>
using namespace std;

void max_subarray(vector<int>arr,int start,int end,int *maxi)
{
    if(end==arr.size())return;
    else if(start>end)max_subarray(arr,0,end+1,maxi);
    else{
        int sum=0;
        for(int i=start;i<=end;i++)
        sum+=arr[i];
        *maxi = max(sum,*maxi);
        max_subarray(arr,start+1,end,maxi);
    }
}

int main()
{
    vector<int> v = {1,2,3,-4,1};
    int maxi = INT_MIN;
    max_subarray(v,0,0,&maxi);
    cout<<maxi;
    return 0;
}