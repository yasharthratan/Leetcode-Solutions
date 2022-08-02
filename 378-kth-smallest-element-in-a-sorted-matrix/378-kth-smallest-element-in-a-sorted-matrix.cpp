class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        int ans;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                a.push_back(matrix[i][j]);
            }
        }
        sort(a.begin(),a.end());
        ans=a[k-1];
        return ans;
        
        /*int n = matrix.size(), m = matrix[0].size();
        int a[n*m], ki=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                a[ki] = matrix[i][j];
                ki++;
            }
        }
        sort(a, a+(n*m));
        return a[k-1];*/
    }
};