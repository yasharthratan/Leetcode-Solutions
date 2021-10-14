class Solution {
public:
    bool isPalindrome(int x) {
        
        long int r=0;
        int no = x;
        int d;
        while(x>0)
        {
            d = x%10;
            r=r*10+d;
            x=x/10;
        }
        if(r==no)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};