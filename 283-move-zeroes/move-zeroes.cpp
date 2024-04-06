class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         count=count+1;
        //         nums.erase(nums.begin() + i);
        //         i--;
        //     }

        // }
        // for(int i=0;i<count;i++){
        //     nums.push_back(0);
        // }

        // Approach II
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        for(;j<nums.size();j++){
            nums[j]=0;
        }
    }
};