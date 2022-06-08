// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int start=0;
        int n=S.length();
        int end;
        
        for(end=0;end<n;end++)
        {
            if(S[end]=='.')
            {
                reverse(S.begin()+start,S.begin()+end);
                start=end+1;
            }
        }
        reverse(S.begin()+start,S.end());
        reverse(S.begin(),S.end());
        
        return S;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends