//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int>m;
        for(int i=0;i<str.length();i++)
        {
            m[str[i]]++;
        }
        int max=-1;
        char ch;
        for(auto x : m)
        {
            if(x.second>max)
            {
                max = x.second;
                ch = x.first;
            }
        }
        return ch;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends