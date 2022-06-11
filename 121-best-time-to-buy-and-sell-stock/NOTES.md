int max_profit=0;
int mini=INT_MAX;
for(int i=0;i<prices.size();i++)
{
mini=min(mini,prices[i]);
max_profit=max(max_profit,prices[i]-mini);
}
return max_profit;