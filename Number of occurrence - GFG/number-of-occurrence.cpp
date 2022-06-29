// { Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int firstOcc(int arr[], int n, int x)
	{
   int s=0;
   int e=n-1;
   int mid=s+(e-s)/2;
   int ans1=-1;
   
   while(s<=e){
       if(arr[mid]==x){
           ans1=mid;
           e=mid-1;
       }
       
       else if(x>arr[mid]){//right
           s=mid+1;
   }
   
   else if(x<arr[mid]){//left
       e=mid-1;
}
mid=s+(e-s)/2;
}
return ans1;
}

int lastOcc(int arr[], int n, int x){
   int s=0;
   int e=n-1;
   int mid=s+(e-s)/2;
   int ans2=-1;
   
   while(s<=e){
       if(arr[mid]==x){
           ans2=mid;
           s=mid+1;
       }
       
       else if(x>arr[mid]){//right
           s=mid+1;
   }
   
   else if(x<arr[mid]){//left
       e=mid-1;
}
mid=s+(e-s)/2;
}
return ans2;
}
	int count(int arr[], int n, int x) 
	{
   int i=firstOcc(arr,n,x);
   int j=lastOcc(arr,n,x);
   
   if(i == -1 )
   {
       return 0;
   }
   return j-i+1;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends