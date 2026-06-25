

class Solution {

public:

    vector<int> dailyTemperatures(vector<int>& temperatures) {
		stack<int>temp;
		vector<int>days;
		days.push_back(0);
		temp.push(temperatures.size()-1);
		for(int i=temperatures.size()-2;i>=0;i--)
		{
			while(!temp.empty()  && temperatures[i]>=temperatures[temp.top()])
			{
					temp.pop();
			}
			
			if(temp.empty())
					days.push_back(0);
			else
			days.push_back(temp.top()-i);
			temp.push(i);
			
		}
		reverse(days.begin(),days.end());
		return days;
    }

};



