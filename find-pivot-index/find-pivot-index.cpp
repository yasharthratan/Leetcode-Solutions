class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int postfixsum=accumulate(nums.begin(),nums.end(),0); // calculate the sum of the array  
    int prefixsum=0; // initially the prefix sum is =0;
    for(int i=0;i<nums.size();i++)
    {
        postfixsum-=nums[i];
        if(postfixsum==prefixsum)
            return i;
        prefixsum+=nums[i];
    }
        return -1;
        
    }
};