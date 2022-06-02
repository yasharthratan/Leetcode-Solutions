// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int leftShops(long long int i, long long int L)
    {
         //  here you are using bitwise Operator 
       // we are shifting the 1 to L
       // beacause 1 is the first shop and 
       //when we will shift it it by L ,
       // we will reach at the last shop or N th shop 
       // because she is at ith shop so we will subtract her position by N;
       int maxShift = 1<< L;
       return maxShift -i;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int i, L;
        cin >> i >> L;
        Solution ob;
        cout << ob.leftShops(i, L) << endl;
    }
    return 0;
}
  // } Driver Code Ends