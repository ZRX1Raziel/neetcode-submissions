class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq; 
        

        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]+=1;
        }
        vector<pair<int,int>> freqer(freq.begin(), freq.end());
        sort(freqer.begin(),freqer.end(),
            [](auto &a , auto&b) {
                return a.second > b.second;
            });
        vector<int> answer;
        for(auto it: freqer)
        {
            answer.push_back(it.first);
        }
        return vector<int>(answer.begin(),answer.begin()+k);

    }
};
