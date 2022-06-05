// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        if(n==0)
        {
            return 0;
        }
        else
        {
            while(n%2==0)
                n/=2;
            return n==1;
            
        }
        
    }
     /*
        
        __builtin_popcount(x): This function is used to count 
        the number of one’s(set bits) in an integer. 
        ye tareeka sirf 2 ke liye use hoga jabki uper waala kisi
        ki power ke liye use ho sakta hai
        
        
      NOTE:  __builtin_popcountll(x): for long long data type
        
        int cnt=__builtin_popcountll(n);
        
        if(cnt==1) return true;
        return false;
    */
};

// { Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}
  // } Driver Code Ends