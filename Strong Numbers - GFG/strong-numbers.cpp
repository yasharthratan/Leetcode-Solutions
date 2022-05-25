// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int fact(int no)
    {
        int f=1;
        for(int i=1;i<=no;i++)
        {
            f=f*i;
        }
        return f;
    }
    int isStrong(int N) 
    {
        int x=N;
     int s=0;   
        while(N>0)
        {
            int d=N%10;
            s=s+fact(d);
            N=N/10;
        }
        if(s==x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}  // } Driver Code Ends