class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> res;
        for(int i=0;i<size(nums);i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        for(int j=0;j<size(pos);j++){
            res.push_back(pos[j]);
            res.push_back(neg[j]);
        }
        return res;
        
//Improved Time Complexity
        // vector<int> ans(nums.size());
        // int e=0,o=1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>=0) ans[e]=nums[i],e=e+2;
        //     else ans[o]=nums[i],o=o+2;
        // }
        // return ans;
    }
};