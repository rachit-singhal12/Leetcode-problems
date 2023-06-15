//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int temp=0,num =0;
        map<int,int>m;
        for(int i=0;i<size;i++)
        {
            m[a[i]]+=1;
        }
        for(auto x : m)
        {
            if(x.second > temp)
            {
                temp = x.second;
                num = x.first;
            }
        }
        if(temp>size/2)return num;
        else return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends