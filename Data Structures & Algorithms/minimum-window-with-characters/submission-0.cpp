

class Solution {

public:

    string minWindow(string s, string t) {
		int n=s.size();
		int m=t.size();
		if(m>n)
		{
			return "";
		}
		unordered_map<char,int> freqs;
		unordered_map<char,int> freqt;
		for(char ch :t)
		{
				freqt[ch]+=1;
		}
		int have=0;
		int need=freqt.size();
		int i=0;
		int bestlen=INT_MAX;
		int beststart=0;
		for(int j=0;j<n;j++)
		{
				freqs[s[j]]+=1;
				if(freqt.count(s[j]) && freqs[s[j]]==freqt[s[j]])
						have+=1;
				while(have==need)
				{
					int currenlen=j-i+1;
					if(currenlen<bestlen)
					{
						bestlen=currenlen;
						beststart=i;
					}
					if(freqt.count(s[i])&& freqt[s[i]]==freqs[s[i]])
						have-=1;
					freqs[s[i]]-=1;
					i+=1;
					
				}
		}
		if(bestlen== INT_MAX)
			return "";
		return s.substr(beststart,bestlen);
		
    }

};