class Solution {
public:
     int digitSquareSum(int n)
     {
        int s=0;
        while(n>0)
        {
            int d=n%10;
            s=s+(d*d);
            n=n/10;
        }
         return s;
         
     }
       
    bool isHappy(int n) 
    {
        int i1=n;
        int i2=digitSquareSum(n);
       
        
       while ( i2 != i1)
        {
            i1 = digitSquareSum(i1);
            i2 = digitSquareSum(digitSquareSum(i2));
        }
        
        return i1==1;
    }
};