class Solution {
public:
    bool isPalindrome(int x) 
    {
        int no=x;
        long long int r=0;
        while(no>0)
        {
            int d=no%10;
            r=r*10+d;
            no/=10;
        }
        if(r==x)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};