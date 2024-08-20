class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        int x=s.length();
        for(int i=0;i<x;i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                st.push(s[i]);
            }
            else if(st.empty()!=true and ((s[i]==')' and st.top()=='(') or (s[i]=='}' and st.top()=='{') or (s[i]==']' and st.top()=='['))){
                st.pop();
            }
            else{
                return false;
            }
        }
        if(st.empty()==true){
            return true;
        }
        return false;
    }
};