class Solution {
public:
     int isSubSeq(string& a, string b) 
    {
        
        int i, j = 0;
        int m = a.length();
        int n = b.length();
        
        for(i=0;i<m && j<n;i++)
        {
            if (a[i] == b[j]) 
            {
                j++;
            }
        }
        return(j==n);
    }
        
    int numMatchingSubseq(string s, vector<string>& words) 
    {
         int c = 0;
        unordered_map<string, int>mp;
        for (int i = 0; i < words.size(); i++)
            mp[words[i]]++;
            
        for (auto it = mp.begin(); it != mp.end(); it++) 
        {
            if (isSubSeq(s, it->first))
            {
                c += it->second;
            }
        }
        
        return c;
        /*int i,j=0;
        int m=s.length();
        int c=0;
        for(int k=0;k<words.size();k++)
        {
            int n=words[k].length();
            for(i=0;i<m && j<n;i++)
            {
                if(s[i] == words[j])
                {
                    j++;
                }
            }
            if(j==n)
            {
                c+=1;
            }
        }
        return c;*/
    }
};