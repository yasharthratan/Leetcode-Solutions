class Solution {
public:
    bool isPalindrome(string s) {
        
        string ss="";
        int n=s.length();
        if(s==" ")
        {
            return true;
        }
        if(n==1)
        {
            return true;
        }
        
        for(int i=0;i<n;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                ss+=s[i]+32;
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                 ss+=s[i];
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                ss+=s[i];
            }
        }
        
        int start=0;
        int end=ss.size()-1;
        while(start<end)
        {
            if((ss[start]!=ss[end]))
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
        
    }
};