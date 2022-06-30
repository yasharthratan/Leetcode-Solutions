// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
         if(x==0)
        {
            return 0;
        }
        long long int low=1;
        long long int high=x;
        long long int ans;
        while(low<=high)
        {
            long long int mid=(low+high)/2;
            long long int msq=mid*mid;
            if(msq==x)
            {
                return mid;
            }
            else if(msq>x)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends