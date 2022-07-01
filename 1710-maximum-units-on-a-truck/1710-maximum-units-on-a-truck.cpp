bool compare(vector<int> v1, vector<int> v2)
{
    return v1[1]>v2[1];//vector sorting in decreasing order
    
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        
        int totalunits=0,i=0;
        sort(boxTypes.begin(),boxTypes.end(),compare);
        
        while(truckSize>0 && i<boxTypes.size())
        {
            if(boxTypes[i][0]<=truckSize)
            {
                totalunits+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else
            {
                int cantake=truckSize;
                truckSize-=cantake;
                totalunits+=cantake*boxTypes[i][1];
            }
            i++;
        }
       return totalunits; 
    }
};