// { Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        static int CHAR1 =256;
        static int CHAR2 =256;
        //int c1[CHAR1];
        //int c2[CHAR2];
         if(str1.length() != str2.length()){
          return false;
      }
        vector<int>c1(CHAR1,0);
        vector<int>c2(CHAR2,0);
        for(int i=0;i<str1.length();i++)
        {
            c1[str1[i]]++;
            c2[str2[i]]++;
        }
        for(int j=0;j<str1.length();j++)
        {
            if(c1[str1[j]]==c2[str2[j]])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends