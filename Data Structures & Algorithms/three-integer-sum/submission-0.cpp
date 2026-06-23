



class Solution {

public:

    vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(),nums.end());
	int n=nums.size();
	set<vector<int>> triplet;
	for(int i=0;i<n;i++)
	{
			
			
				int sum=INT_MIN; 
				int j=i+1;int k=n-1;
				while(j<k)
				{
						sum=nums[i]+nums[j]+nums[k];
						if(sum==0 )
						{
								triplet.insert({nums[i],nums[j],nums[k]});
								j+=1;
								k-=1;
						}
						else if(sum<0)
							j+=1;
						else
							k-=1;
				}
			
			
	}
		vector<vector<int>> ans(triplet.begin(),triplet.end());
		return ans;
    }

};