// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]==0)
            {
                low=mid+1;
            }
            else
            {
                if(mid==0 || a[mid]!=a[mid-1])
                {
                    return mid;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}  // } Driver Code Ends