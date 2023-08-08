class Solution {
public:
    int countPrimes(int n) {
        vector<bool>v(n+1,true);
        int count=0;
        v[0]=v[1]=false;
        for(int i=2;i<n;i++)
        {
            if(v[i])
            {
                count++;
                for(int j = i*2;j<n;j=j+i)
                v[j]=0;
            }
        }
        return count;
    }
};