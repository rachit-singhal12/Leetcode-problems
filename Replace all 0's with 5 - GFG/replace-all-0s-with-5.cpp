//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    vector<int>v;
    int sum=0;
    while(n>0)
    {
        if(n%10 == 0)
        v.push_back(5);
        else
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
    for(auto x : v)
    {
        sum = sum*10+x;
    }
    return sum;
}