class Solution {
public:
    string getHint(string secret, string guess) {
        int b=0,c=0;
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]){
                b++;
                guess[i]=-1;
                secret[i]=-1;
            }

        }
        for(int i=0;i<secret.length();i++){
            if(secret.find(guess[i])!=-1 && guess[i]!=-1){
                c++;
                secret[secret.find(guess[i])]=-1;
            }
        }
        string ans=to_string(b)+"A"+to_string(c)+"B";
        return ans;
    }
};