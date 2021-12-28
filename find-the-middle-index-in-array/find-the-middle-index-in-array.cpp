class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
            int postfixsum=accumulate(nums.begin(),nums.end(),0); // calculate the sum of the array  
    int prefixsum=0; // initially the prefix sum is =0;
    for(int i=0;i<nums.size();i++)
    {
        postfixsum-=nums[i];//lets the mid element contender be i , subtract it from sum as it should neither be in prefixsum nor in postfixsum.
        if(postfixsum==prefixsum)//check if prefixsum ==postfix sum  if yes return true.
            return i;
        prefixsum+=nums[i];//add the element int orpefix sum since the previous condition was false and this element is no longer the contender of middle index.
    }
        return -1;//if the above condition in the loop was false this pretty much concludes that we have no middle element in our array.
    

        
    }
};