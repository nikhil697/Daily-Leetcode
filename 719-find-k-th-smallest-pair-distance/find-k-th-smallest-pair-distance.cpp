class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int maxElem = nums[nums.size()-1];
    
        int lo=0;
        int hi=maxElem;
        int mid;
        while(lo<hi){
            mid=(lo+hi)/2;
            int count=0;
            
            int lef=0;
            int rig=0;
            while(rig<nums.size()){
                while(nums[rig]-nums[lef]>mid){
                    lef++;
                }
                count+=rig-lef;
                rig++;
            }
            
            if(count>=k){
                hi=mid;
            }
            else{
                lo=mid+1;
            }
        }
        return lo;
    }
};