// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        
        int c=-1;
        int d=-1;
        int mini=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                c=i;
            }
            if(a[i]==y)
            {
                d=i;
            }
            if(c!=-1 && d!=-1)
            {
            mini=min((abs(d-c)),mini);
            }
        }
        if(c==-1 || d==-1)
        {
            return -1;
        }
        else
        {
            return mini;
        }
        // code here
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
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends