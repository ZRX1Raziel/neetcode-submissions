

class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> repeat;
        int n = s.length();
        int i = 0;
        int j = 1;
        if (s.empty()) return 0;
        int maxle = 1;
        repeat[s[i]] += 1;
        int Maxfreq = repeat[s[i]];

        while (j < n) {
            repeat[s[j]] += 1;
            Maxfreq = max(Maxfreq, repeat[s[j]]);
            if ((j - i + 1) - Maxfreq > k) {
                repeat[s[i]] -= 1;
                i += 1;
            }

            maxle = max(maxle, j - i + 1);
            j += 1;
        }
        return maxle;
    }
};
