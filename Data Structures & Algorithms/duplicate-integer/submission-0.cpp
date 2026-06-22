
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
          sort(nums.begin(), nums.end());
	      int n=nums.size();
          int flag=0;
          for(int i=1;i<n;i++)
          {
                if(nums[i-1]==nums[i])
                {
                    flag=1;
                    break;
                }
          }
	if(flag==0)
		return false;
	else
		return true;
      
    }
};