class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int count=0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
                i++;}}
        for(int j=0;j<nums.size();j++){
            if (nums[j] == 0) {
                nums.erase(nums.begin() + j);
                count++;
                j--;
        }}
        for(int i = 0; i < count; i++) {
            nums.push_back(0);
}
        return nums;
    }
};