class Solution {
public:
    string reverseWords(string s) 
    {
        int start=0;
        int n=s.length();
        int end;
        
        for(end=0;end<n;end++)
        {
            if(s[end]==' ')
            {
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;
            }
        }
        reverse(s.begin()+start,s.end());
        reverse(s.begin(),s.end());
        s = std::regex_replace(s, std::regex("^ +| +$|( ) +"), "$1");
        
        return s;
        
    }
};