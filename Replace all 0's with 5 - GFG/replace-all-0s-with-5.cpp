//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
       vector<int>v;
        while(n>0)
        {
            if(n%10==0)
            v.push_back(5);
            else
            v.push_back(n%10);
            n/=10;
        }
       int num=0;
       for(int i=v.size()-1;i>=0;i--)
       {
           num = num*10 + v[i];
       }
       return num;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends