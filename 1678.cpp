class Solution {
public:
    string interpret(string command) {
        string str="";
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='('&&command[i+1]==')')
            {
                str=str+'o';
                i++;
            }
else if((command[i]>='a'&&command[i]<='z')||(command[i]>='A'&&command[i]<='Z'))
            {
                str=str+command[i];
            }
        }
        return str;
    }
};