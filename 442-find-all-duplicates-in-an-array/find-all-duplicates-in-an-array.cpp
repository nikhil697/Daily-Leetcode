class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> newone;
        unordered_map<int,int>map;
        
        for(auto i:nums){
            map[i]++;
        }
        for(auto i:map){
            if(i.second==2){
                newone.push_back(i.first);
            }
        }
        return newone;
    }
};