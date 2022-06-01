// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int sum=0;
        int flag;
        int i=0;
        while(str[i]!='\0')
        {
            int s=0;
            flag=0;
            while(isdigit(str[i]))
            {
                s=s*10+(str[i]-48);
                i++;
                flag=1;
            }
            if(flag==1)
            {
                sum+=s;
                i--;
            }
        i++;
        }
    return sum;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends