class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int size1=bits.size();
        int cnt=0;
        
        if(size1==1){
            return true;
        }
        else if(bits[size1-1]==0 && bits[size1-2]==0){
            return true;
        }
        else if(bits[size1-2]==1){
            for(int i=size1-2;i>=0;i--){
                if(bits[i]==1){
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(cnt%2>0){
                return false;
            }
            else{
                return true;
            }
        }
        return false;
    }
};