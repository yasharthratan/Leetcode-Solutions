class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans;
        unordered_set<int>s;
            for(int i=0;i<n;i++)
            {
                s.insert(nums1[i]);
            }
       
    int res=0;
    for(int i=0;i<m;i++)
    {
        if(s.find(nums2[i])!=s.end())
        {
            res++;
            s.erase(nums2[i]);
            ans.push_back(nums2[i]);
        }
    }
    return ans;
        
    }
};