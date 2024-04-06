class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     for (int i=0;i<nums.size();i++){
    //         if(nums[i]!=i){
    //             return i;
    //         }
    //     }
    //     return nums.size();
    // }

    //Better Approach with XOR
        int n = nums.size();
        int ans =0;
        for(int i =1;i<=n;i++){
            ans = ans ^ i;
        }
        for(int i =0;i<nums.size();i++){
            ans= ans^nums[i];
        }
        return ans;
    }
};