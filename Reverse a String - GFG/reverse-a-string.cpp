// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str)
{
    string s="";
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        s+=str[n-i-1];
    }
    return s;
  //Your code here
}