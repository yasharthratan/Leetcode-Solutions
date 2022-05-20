// { Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long maxProduct(int arr[], int n) {
        // code here
        if(n<3)
       return -1;
       sort(arr,arr+n);
       long long p=1,r=1;
       p=p*arr[0];
       p=p*arr[1];
       p=p*arr[n-1];
       r=r*arr[n-1];
       r=r*arr[n-2];
       r=r*arr[n-3];
       return max(p,r);
        //  long long p1=1;
        //  long long p2=1;
        // // int p2=1;
        // sort(arr,arr+n);
        // p1=arr[n-1]*arr[n-2]*arr[n-3];
        // p2=arr[0]*arr[1]*arr[n-1];
        // return(p1>p2?p1:p2);
        
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
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends