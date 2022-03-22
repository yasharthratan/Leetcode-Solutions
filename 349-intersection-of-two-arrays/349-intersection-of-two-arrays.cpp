class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int c=0;
    int N=1e6+1;//(10^6)
        vector<int> arr(N,0);
    vector<int> ans;
    for(int i=0;i<nums1.size();i++)
    {
        arr[nums1[i]]=1;
    }
    for(int j=0;j<nums2.size();j++)
    {
        if(arr[nums2[j]]==1)
            arr[nums2[j]]=2;
    }
    for(int k=0;k<N;k++)
    {
        if(arr[k]>=2)
        {
            ans.push_back(k);
        }
    }
    return ans;
        
    }
};