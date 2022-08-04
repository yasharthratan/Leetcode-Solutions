class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int>mp;
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        bool odd=0;
        for(auto i:mp)
        {
            if((i.second)%2==0)
            {
                c+=i.second;
            }
            else
            {
                if(i.second==1)odd=true;
                if((i.second%2==1) && (i.second>1))
                {
                    odd=true;
                    c+=i.second-1;
                }
            }
        }
        if(odd)
        {
            return (c+1);
        }
        return c;
        
        
    }
};
/*
 map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int ans=0;
        bool odd=0;
        for(auto i:m){
            if(i.second%2==0){
                ans+=i.second;
            }
            else{
                if(i.second==1)odd=true;
                if(i.second%2==1 && i.second>1){
                    odd=true;
                ans=ans+i.second-1;
                }
            }
        }
        if(odd)return ans+1;
        return ans;
*/