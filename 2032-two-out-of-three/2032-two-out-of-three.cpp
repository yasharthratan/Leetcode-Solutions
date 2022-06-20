class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
      
       
        vector<int> v;
        set<int> s, s1, s2;

        for (auto i : nums1)
        {
            s.insert(i);
        }

        for (auto i : nums2)
        {
            s1.insert(i);
        }

        for (auto i : nums3)
        {
            s2.insert(i);
        }

        unordered_map<int, int> mp;

        for (auto i : s)
        {
            mp[i]++;
        }

        for (auto i : s1)
        {
            mp[i]++;
        }

        for (auto i : s2)
        {
            mp[i]++;
        }

        for (auto i : mp)
        {
            if (i.second >= 2)
            {
                v.push_back(i.first);
            }
        }
        return v;
        /*map<int,set<int>>st;
        
        for(int i=0;i<nums1.size();i++)
        {
            st[nums1[i]].insert(1);
        }
        for(int i=0;i<nums2.size();i++)
        {
            st[nums2[i]].insert(2);
        }
        for(int i=0;i<nums3.size();i++)
        {
            st[nums3[i]].insert(3);
        }
        vector<int>result;
        for(auto it=st.begin();it!=st.end();it++)
        {
            if(it->second.size()>=2)
            {
                result.push_back(it->first);
            }
        }
        return result;*/
        
       
        
    }
};