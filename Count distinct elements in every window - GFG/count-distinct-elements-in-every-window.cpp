// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>ans;
        unordered_map<int,int>s;
        for(int i=0;i<k-1;i++)
        {
            s[A[i]]++;
        }
        for(int i=k-1;i<n;i++)
        {
            s[A[i]]++;
            ans.push_back(s.size());
            s[A[i-k+1]]--;
            if(s[A[i-k+1]]==0)
            {
                s.erase(A[i-k+1]);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends