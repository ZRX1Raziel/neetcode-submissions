

class Solution {

public:

int maxProfit(vector<int>& prices) {
			int n=prices.size();
			vector<int>prefix(n);
			prefix[n-1]=prices[n-1];
			int profit=0;
			int maxprofit=0;
			for(int i=n-2;i>=0;i--)
			{
					prefix[i]=max(prefix[i+1],prices[i]);
					cout<<prefix[i]<<"";
			}
			for(int i=0;i<n;i++)
			{
					profit=prefix[i]-prices[i];
					cout<<profit<<'\n';
					maxprofit=max(maxprofit,profit);
			}
			return maxprofit;
}

};