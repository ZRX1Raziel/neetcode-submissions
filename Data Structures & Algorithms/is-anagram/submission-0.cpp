class Solution {
public:
    bool isAnagram(string s, string t) {
        	unordered_map<char,int> map1;
		unordered_map<char,int> map2;
		int n=s.length();
		int m=t.length();
		if(n!=m)
			return false;
		else
		{
			for(int i=0;i<n;i++)
			{
				map1[s[i] ] +=1;
			}
			for(int i=0;i<m;i++)
			{
				map2[t[i] ] +=1;
			}
			
			if(map1==map2)
				return true;
			else

				return false;
		}
    }
};
