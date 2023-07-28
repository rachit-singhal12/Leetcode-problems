class Solution {
public:
    int pivotInteger(int n) {
        /* solution 1
        int sum1=n,sum2=(n*(n+1))/2;
        while(sum2>=sum1)
        {
            if(sum1==sum2)
            return n;
            n--;
            sum1=sum1+n;
            sum2 = n*(n+1)/2;
        }
        return -1;
        */
        //solution 2
        double x = sqrt((n*n+n)/2);
        if((int)x == x)return x;
        return -1;
    }
};