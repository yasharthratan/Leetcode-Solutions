class Solution {
public:
    string toLowerCase(string s) 
    {
        char ch[100];
        int i=0;
        
        while(s[i]!='\0')
        {
            if((int)s[i]>=65 && (int)s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        i++;
        }
        return s;
        
    }
};