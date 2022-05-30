// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        long long curr_sum=0;
        int i;
        for( i=0;i<n;i++)
        {
            if(sum-curr_sum-a[i]==curr_sum)
            {
                break;
            }
            curr_sum+=a[i];
        }
        return (n==i) ?-1 : (i+1);
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends