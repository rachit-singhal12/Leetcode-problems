//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    string getBinaryRep(int N)
    {
        string s="";
        while(N>0)
        {
            int temp = N%2;
            if(temp == 1)
            {
                s='1'+s;
            }
            else
            {
                s='0'+s;
            }
            N/=2;
        }
        for(int i=s.length();i<=29;i++)
        {
            s='0'+s;
        }
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends