// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        /*for(int i=0;i<k;i++)
        {
            swap(arr[i],arr[k-i-1]);
        }
        int j=0;
        for(int i=k;i<n;i++)
        {
            swap(arr[i],arr[n-j-1]);
        }*/
        int i=0;
        while(i+k<n)
        {
           reverse(arr.begin()+i,arr.begin()+i+k);
           i=i+k;
        }
        
        reverse(arr.begin()+i,arr.end());
       
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends