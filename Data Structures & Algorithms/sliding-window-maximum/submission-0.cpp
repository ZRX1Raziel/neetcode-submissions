

class Solution {
   public:
     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> answer;
        multiset<int> window;
        for (int i = 0; i < k; i++) {
            window.insert(nums[i]);
        }
        answer.push_back(*window.rbegin());
        for (int i = k; i < nums.size(); i++) {
            auto it = window.find(nums[i - k]);
            window.erase(it);
            window.insert(nums[i]);
            answer.push_back(*window.rbegin());
        }
        return answer;
        
    }
};