//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            vector <int> v;
            int uc=0,lc=0,nc=0,scc=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                uc++;
                else if(s[i]>='a' && s[i]<='z')
                lc++;
                else if(isdigit(s[i]))
                nc++;
                else
                scc++;
            }
            v.push_back(uc);
            v.push_back(lc);
            v.push_back(nc);
            v.push_back(scc);
            return v;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends