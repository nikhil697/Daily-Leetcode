class Solution {
public:
    int passThePillow(int n, int time) {
        int j=1;
        int count=1;
        int i=1;
        while(i<=time){
            
            j=j+count;
            
            if(j==n){
                count=-1;
            }
            else if(j==1){
                count=1;
            }
            i++;
        }
        return j;
    }
};