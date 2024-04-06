class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        char ch[n + 1];
        strcpy(ch, s.c_str());

        string result="";
        int count=0;
        // For Left to right
        for(int i=0;i<n;i++){
            if(ch[i]=='('){
                count++;
            }
            else if(ch[i]==')'){
                if(count>0){
                    count--;
                }
                else{
                    ch[i]=0;
                }
            }
        }
        count=0;
        // For right to left
        for(int i=n-1;i>=0;i--){
            if(ch[i]==')'){
                count++;
            }
            else if(ch[i]=='('){
                if(count>0){
                    count--;
                }
                else{
                    ch[i]=0;
                }
            }
        }
        
        for(char c:ch){
            if(c!=0){
                result.push_back(c);
            }
        }
        return result;
        
    // Time - O(N)
    //Space - O(N)   
        
    }
};