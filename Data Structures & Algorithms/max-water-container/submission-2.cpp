

class Solution {

public:

    int maxArea(vector<int>& heights) {
		int n=heights.size();
		int i=0;
		int j=n-1;
		int water=0;
		int maxwater=0;
		while(i<j)
		{
				water=min(heights[i],heights[j])*(j-i);
				maxwater=max(maxwater,water);
				if(heights[i]>heights[j])
					{
						j-=1;
						water=0;
					}
				else if(heights[i]<heights[j])
					{
						i+=1;
						water=0;
					}
				else
				{
						i+=1;
						j-=1;
						water=0;
				}
		}
		return maxwater;
    }

};