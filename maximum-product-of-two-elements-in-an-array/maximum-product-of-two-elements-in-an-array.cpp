class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int i,j;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int maxv;
        
        i=n-2;
        j=n-1;
        
        maxv= (nums[i]-1)*(nums[j]-1);
            
            return maxv;
        
    }
};