//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    sort(arr,arr+N,[](auto a,auto b){
	        return a>b;
	    });
	    vector<int>v;
	    int high = N-1;
	    int low =0;
	    while(high>low)
	    {
	        v.push_back(arr[low]);
	        v.push_back(arr[high]);
	        low++;
	        high--;
	    }
	    if(N%2==0)
	    {
	        return v;
	    }
	    else
	    {
	        v.push_back(arr[(N/2)]);
	    }
	}
};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends