// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int mindGame(int K) 
    {
        int d;
        
        for(int i=0;i<10;i++)
        {
          d=(rand() % 10) + 1;  
        }
        
        int x=d;
        d=d*2+K;
        int a=d/2;
        int ans=a-x;
        
        return ans;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int K;
        
        cin>>K;

        Solution ob;
        cout << ob.mindGame(K) << endl;
    }
    return 0;
}  // } Driver Code Ends