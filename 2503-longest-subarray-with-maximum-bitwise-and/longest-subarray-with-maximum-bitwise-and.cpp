class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int max_val = *max_element(nums.begin(), nums.end());
        int max_len = 0;
        int current_len = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == max_val) {
                current_len++;
                max_len = max(max_len, current_len);
            } else {
                current_len = 0;
            }
        }
        
        return max_len;
    }
};