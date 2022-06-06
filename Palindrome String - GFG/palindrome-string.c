// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

int isPalindrome(char S[])
{
    // Your code goes here
    int n=strlen(S);
    if(n==1)
    {
        return 1;
    }
    char rev[n];
    
    for(int i=0;i<n/2;i++)
    {
        if(S[i]!=S[n-i-1])
        {
           return 0; 
        }
    }
    
    return 1;    
    
}

// { Driver Code Starts.

int main() 
{
   	int t;
   	scanf("%d", &t);
   	while(t--)
   	{
   		char s[100000];
   		scanf("%s", s);


   		printf("%d\n", isPalindrome(s));
   	}

    return 0;
}  // } Driver Code Ends