//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(i==0)
        s[i] = toupper(s[i]);
        else
        {
            string v = " ";
            if(s[i]==v[0])
            {
                s[i+1] = toupper(s[i+1]);
            }
        }
    }
    return s;
}