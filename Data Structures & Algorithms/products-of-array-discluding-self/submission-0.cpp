

class Solution {

public:

    vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> output;
		int n=nums.size();
		int prod=1;
		int zerocount=0;
		for(int i=0;i<n;i++)
			{
				if(nums[i]==0)
					zerocount+=1;
				else
					prod*=nums[i];
			}
		if(zerocount>=2)
			{
				vector<int> special(n,0);
				return special;
			}
		else if(zerocount==1)
		{
			vector<int> subspecial(n,0);
			for(int i=0;i<n;i++)
			{
				if(nums[i]==0)
				{
				subspecial[i]=prod;
				break;
				}
					
			}
			return subspecial;
		}
		else
		{
			vector<int> regular(n,prod);
				for(int i=0;i<n;i++)
				{
					regular[i]=regular[i]/nums[i];
				}
				return regular;
		}
  

    }

};