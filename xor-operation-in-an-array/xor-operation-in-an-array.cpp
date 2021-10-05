class Solution {
public:
    int xorOperation(int n, int start) 
    {
        
        vector<int> nums(n,0);
        int x =start;
        for(int i=1;i<n;i++)
        {
            nums[i] = start + 2*i;
            x^= nums[i];
        }
       return x; 
    }
};