class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        int temp=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==1){
                count++;
                temp=count;
            }
            else{
                count=0;
            }
            if (temp==3){
                return true;
            }
        }
        return false;
    }
};