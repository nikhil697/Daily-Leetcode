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
    }
};