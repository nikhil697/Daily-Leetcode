class Solution {
public:
    long long minimumSteps(string s) {
        long long steps=0;
        long long counter=0;
        for(int j=s.length()-1;j>=0;j--){
            if(s[j]=='0'){
                counter++;
            }
            else if(s[j]=='1'){
                steps+=counter;
            }
        }
        return steps;
    }
};