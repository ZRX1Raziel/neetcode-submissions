class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char,int> freq;
        unordered_map<char,int> freqq;

        int n = s1.length();
        int m = s2.length();

        if(n > m)
            return false;

        for(char c : s1)
            freq[c]++;

        int i = 0;

        for(int j = 0; j < m; j++)
        {
            
            if(freq.find(s2[j]) == freq.end())
            {
                freqq.clear();
                i = j + 1;
                continue;
            }

            freqq[s2[j]]++;

           
            while(freqq[s2[j]] > freq[s2[j]])
            {
                freqq[s2[i]]--;

                if(freqq[s2[i]] == 0)
                    freqq.erase(s2[i]);

                i++;
            }

            if(freqq == freq)
                return true;
        }

        return false;
    }
};