// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        int i,j=0;
        int m=A.length();
        int n=B.length();
        
        if(m>n)
        {
            return 0;
        }
        for(i=0;i<n && j<m;i++)
        {
            if(A[j]==B[i])
            {
                j++;
            }
        }
        return (j==m);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends