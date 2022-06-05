// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N == 0){
            return -1;
        }
        if(__builtin_popcount(N)>1){
            return -1;
        }
        return ffs(N);
        /*int bit=log2(N)+1;
        int ans,i;
        if(__builtin_popcount(N)>1)
        {
            return -1;
        }
        else
        {
            i=0;
            int x=N;
            while(x>0)
            {
                int d=x%2;
                if(d==1)
                {
                    ans=bit-i+1;
                    break;
                }
                x/=2;
                i++;
            }
            return ans;
        }*/
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
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends