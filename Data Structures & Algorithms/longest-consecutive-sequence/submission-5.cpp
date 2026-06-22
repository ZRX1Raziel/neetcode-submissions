
class Solution {

public:

int longestConsecutive(vector<int>& nums) {
		
		int maxcount=0;
		unordered_set<int> numbers(nums.begin(),nums.end());
		for(auto num:numbers)
		{
				if(numbers.count(num-1)==0)
				{
						int length=1;
						int curr=num;

						while(numbers.count(curr+1))
						{
							curr+=1;
							length+=1;
						}
						maxcount=max(length,maxcount);
				}
		}
		return maxcount;
}

};

