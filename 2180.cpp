class Solution {
public:
    bool evens(int i)
    {
        int sum=0;
        while(i>0)
        {
            sum+=i%10;
            i/=10;
        }
        return (sum%2)==0;
    }
    int countEven(int num) {
        int count=0;
        for(int i=2;i<=num;)
        {
            if(evens(i))
            {
                cout<<i<<" ";
                count++;
            }
            i++;
        }
        return count;
    }
};