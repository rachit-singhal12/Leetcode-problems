//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isVowel(char c){
        if(tolower(c)=='a'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='e'||tolower(c)=='u')return "YES";
        else return "NO";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    }
    return 0; 
} 
// } Driver Code Ends