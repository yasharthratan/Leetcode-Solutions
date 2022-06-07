class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int i,j=0;
        int m=s.length();
        int n=t.length();
        
        if(m>n)
        {
            return 0;
        }
        for(i=0;i<n && j<m;i++)
        {
            if(s[j]==t[i])
            {
                j++;
            }
        }
        return(j==m);
        
    }
};