class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        int n = arr.size();
        unordered_map<int,int> rankMap;
        vector<int> res(arr);
        sort(res.begin(), res.end());
        int rank = 1;
        for(int i = 0; i < n; i++){
            if(rankMap.find(res[i]) == rankMap.end()){
                rankMap[res[i]] = rank;
                rank++;
            }
        }
        
        for(int i = 0; i < n; i++){
            res[i] = rankMap[arr[i]];
        }
        return res;
        
    }
};