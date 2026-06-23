

class Solution {

public:

    vector<int> twoSum(vector<int>& numbers, int target) {
		int n=numbers.size();
		
		
		vector<int>answer(2);
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
					if(numbers[i]+numbers[j]==target && i!=j)
					{
							answer[0]=(i+1);
							answer[1]=(j+1);
							return answer;
					}
			}
		}
    }

};