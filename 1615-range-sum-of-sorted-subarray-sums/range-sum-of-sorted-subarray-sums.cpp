class Solution {
public:
    const int MOD = 1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        vector<int> subarray_sums;
        int count=0;
        for (int start = 0; start < n; ++start) {
            int current_sum = 0;
            for (int end = start; end < n; ++end) {
                current_sum += nums[end];
                subarray_sums.push_back(current_sum);
            }
        }
        sort(subarray_sums.begin(),subarray_sums.end());
        for(int i=left-1;i<right;i++ ){
            count=(count+subarray_sums[i]) % MOD;
        }
        return count;
    }
};