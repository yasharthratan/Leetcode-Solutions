class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        int n = words.size();
        string S,P;
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            P = words[i];
            S = P;
            reverse(P.begin(), P.end());
            if(words[i] == P)
            {
                break;
            }
            else
            {
                c+=1;
            }
        }
        if(c==n)
        {
            return "";
        }
        else
        {
            return S;
        }
        
    }
};