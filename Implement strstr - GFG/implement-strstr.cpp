// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     int ns=s.length();
     int nx=x.length();
     
     if(nx>ns)
     {
         return -1;
     }
     for(int i=0;i<(ns);i++)
     {
         string temp=s.substr(i,nx);
         if(temp == x)
         {
             return i;
         }
     }
     return -1;
}