
class Solution {

public:

    int longestConsecutive(vector<int>& nums) {
		int n=nums.size();
		sort(nums.begin(),nums.end());
		int count=1;
		int maxcount=1;
		for(int i=1;i<n;i++)
		{
			if(nums[i-1]==nums[i])
				continue;
			else if(nums[i]-nums[i-1]==1)
				count+=1;
			else
			{
				maxcount=max(count,maxcount);
				count=1;
			}
		}
        maxcount=max(count,maxcount);
		if(n==0)
			return 0;
		else	
		return maxcount;
    }

};