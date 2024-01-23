class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        for(int i= digits.size()-1;i>=0;i--)
        {
            int sum=0;
            if(i==digits.size()-1)
                sum = digits[i]+1+carry;
            else
                sum = digits[i]+carry;
            if(sum>=10)
            {
                digits[i] = sum%10;
                sum/=10;
                carry = sum%10;
            }
            else
            {
                digits[i] = sum;
                carry=0;
                break;
            }
        }
        if(carry>0)
        digits.insert(digits.begin(), carry);
        return digits;
    }
};