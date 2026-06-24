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

        int q = 0;

        for(int r = 0; r < m; r++)
        {
            // invalid character
            if(freq.find(s2[r]) == freq.end())
            {
                freqq.clear();
                q = r + 1;
                continue;
            }

            freqq[s2[r]]++;

            // too many occurrences of this character
            while(freqq[s2[r]] > freq[s2[r]])
            {
                freqq[s2[q]]--;

                if(freqq[s2[q]] == 0)
                    freqq.erase(s2[q]);

                q++;
            }

            if(freqq == freq)
                return true;
        }

        return false;
    }
};