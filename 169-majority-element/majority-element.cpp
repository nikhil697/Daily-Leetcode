class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>mapp;
        for(int i=0;i<nums.size();i++){
            mapp[nums[i]]++;
        }
        
        for (auto i:mapp){
            if(i.second> nums.size()/2){
                return i.first;
            }
        }
       return -1; 
    }
};