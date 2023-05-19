class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	    long long sum = n;
	    return sum*(sum+1)/2;
	}
};