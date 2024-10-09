class Solution {
public:
    int minAddToMakeValid(string s) {
        int openbrac=0;
        int minadd=0;
        for (char c:s){
            if(c=='('){
                openbrac++;
            }
            else{
                if(openbrac>0){
                    openbrac--;
                }
                else{
                    minadd++;
                }
            }
        }
        return minadd+openbrac;
    }
};