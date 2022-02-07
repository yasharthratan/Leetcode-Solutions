class Solution {
public:
    bool isSameAfterReversals(int num) 
    {
        
        int n=num;
        int r1=0;
        while(num>0)
        {
            int d=num%10;
            r1=r1*10+d;
            num=num/10;
        }
        int r2=r1;
        int r3=0;
        
         while(r2>0)
        {
            int d=r2%10;
            r3=r3*10+d;
            r2=r2/10;
        }
        
        if(n==r3)
        {
            return true;
        }
        else
        {
            return false;
        }
        
  
        
        
    }
};