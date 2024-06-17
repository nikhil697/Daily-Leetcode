class Solution {
public:
    bool judgeSquareSum(int c) {
        
        vector<long long> nums;
        for(long long i=0;i*i<=c;++i){
            nums.push_back(i*i);
        }
        long long left=0;
        long long right =nums.size()-1;
        while(left<=right){
            long long sum=nums[left]+nums[right];
            if(sum==c){
                return true;
            }
            else if(sum<c){
                ++left;
            }
            else if(sum>c){
                --right;
            }
        }
        return false;
    }
};