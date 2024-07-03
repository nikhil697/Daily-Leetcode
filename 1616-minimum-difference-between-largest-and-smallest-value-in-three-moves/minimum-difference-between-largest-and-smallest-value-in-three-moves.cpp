class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        int x=nums.size();
        
        if(x<=4) return 0;
        sort(nums.begin(),nums.end());
        int y= INT_MAX;
        for(int left=0,right=x-4;left<4;left++,right++){
            y=min(y,nums[right]-nums[left]);
        }
        return y;
    }
};