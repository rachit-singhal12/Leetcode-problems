//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max =-1,temp=0,temp1=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=m-1;j>=0;j--)
	        {
	            if(arr[i][j]==1)temp++;
	            if(temp>temp1)
	            {
	                temp1 = temp;
	                max = i;
	            }
	        }
	        temp=0;
	    }
	    return max;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends