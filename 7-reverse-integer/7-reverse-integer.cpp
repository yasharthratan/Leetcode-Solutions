class Solution {
public:
    int reverse(int x) {
          int upperLimit =  (pow(2,31) - 1)/10;
        int lowerLimit = -(pow(2,31)/10);
        int ans = 0;
  
        while(x){
           
            int lastDigit = x%10;
			
            if(ans <= upperLimit && ans >= lowerLimit){ // Checking if ans will be there in integer range only.
                 int temp = ans * 10 + lastDigit;
                 ans = temp;
                 x/=10;  
            }
            else{ // ans would exceed the int if multiplied by 10. Thus integer overflow occur
                return 0;
            }
            
        }
        return ans;
        
    }
};