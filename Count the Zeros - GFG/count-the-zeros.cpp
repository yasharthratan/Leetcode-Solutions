// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) 
    {
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]>0)
            {
                low=mid+1;
            }
            else
            {
                if(arr[mid]!=arr[mid-1] || mid==0)
                {
                    return (n-mid);
                }
                else
                {
                    high=mid-1;
                }
            }
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
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends