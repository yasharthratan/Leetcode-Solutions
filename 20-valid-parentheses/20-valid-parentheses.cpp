class Solution {
public:
    bool isValid(string s) {
        
        stack<int>St;
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                St.push(s[i]);
            }
            else
            {
                if(!St.empty())
                {
                    char top=St.top();
                    if((s[i]==')' && top=='(') || (s[i]=='}' && top=='{') || (s[i]==']' && top=='['))
                    {
                        St.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if(St.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};