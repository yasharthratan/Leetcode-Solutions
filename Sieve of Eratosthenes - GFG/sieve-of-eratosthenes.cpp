// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        int i,j;
        vector<int>ans;
        vector<bool>isprime(N+1,true);
        
        for(i=2;i*i<=N;i++)
        {
            if(isprime[i])
            {
                for(j=i*i;j<=N;j=j+i)
                {
                    isprime[j]=false;
                }
            }
        }
        for(int i=2;i<=N;i++)
        {
            if(isprime[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends