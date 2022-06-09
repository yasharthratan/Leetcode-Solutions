// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) 
	{
	     int ans=-1;
	     int res=-1;
	     int largest=0;
	     for(int i=1;i<n;i++)
	     {
	         if(arr[i]>arr[largest])
	         {
	             res=largest;
	             largest=i;
	         }
	         else if(arr[i]!=arr[largest])
	         {
	             if(res==-1 || arr[i]>arr[res])
	             {
	                 res=i;
	             }
	         }
	     }
	     if(res!=-1)
	     {
	        ans=arr[res];
	        return ans; 
	     }
	     else
	     {
	         return -1;
	     }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends