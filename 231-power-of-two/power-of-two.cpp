class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=-31;i<32;i++){
            if(n==pow(2,i)){
                return true;
            }
        }
        return false;
    }
};