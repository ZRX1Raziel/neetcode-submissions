


class Solution {

public:

    int lengthOfLongestSubstring(string s) {
	int n=s.length();
	int i=0;
	int j=1;
	int le=1;
	int maxle=0;
	unordered_set<char> substrin;
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
	{
	
	substrin.insert(s[0]);
	while(j<n)
	{
		if(substrin.find(s[j])==substrin.end())
			{
				substrin.insert(s[j]);
				j+=1;
				le+=1;
				maxle=max(maxle,le);
			}
		else
		{
				substrin.erase(s[i]);
				i+=1;
				le-=1;
		}
	}
	return maxle;
	}
    }

};