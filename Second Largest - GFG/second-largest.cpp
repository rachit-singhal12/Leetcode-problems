//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int largest1 = arr[0];
	    for(int i=1;i<n;i++)
	    if(arr[i]>largest1)largest1 = arr[i];
	    int largest2=-1;
	    for(int i=0;i<n;i++)
	    if(arr[i]!=largest1)
	    {
	        largest2 = arr[i];
	        break;
	    }
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]==largest1)continue;
	        else
	        {
	            if(arr[i]>largest2)largest2 = arr[i];
	        }
	    }
	    return largest2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends