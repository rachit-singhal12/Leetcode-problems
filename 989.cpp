class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        vector<int>result;
        reverse(num.begin(),num.end());
        int i=0;
        int carry=0;
        while(i<num.size() || k || carry){
           int first = (i < num.size()) ? num[i] : 0;
            int sum= first+(k%10)+ carry;
            carry=sum/10;
            result.push_back(sum%10);
            k=k/10;
            i++; 
        }
        reverse(result.begin(),result.end());
  return result;  }
};