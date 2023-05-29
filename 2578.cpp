class Solution {
public:
    int splitNum(int num) {
        vector<int>v;
        while(num>0)
        {
            v.push_back(num%10);
            num/=10;
        }
        sort(v.begin(),v.end());
        int num1=0,num2=0;
        for(int i=0;i<v.size();i++)
        {
            if(i%2==0)num1 = num1*10+v[i];
            else num2 = num2*10 +v[i];
        }
        return num1+num2;
    }
};