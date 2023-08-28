//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int count=0,i=0,temp=-1;
	    for(i=0;i<n-1;i++)
	    {
	        if(arr[i]>arr[i+1])
	        {
	         count = i;
	         temp  = 0;
	        }
	    }
	    if(temp!=-1)
	    return count+1;
	    else return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends