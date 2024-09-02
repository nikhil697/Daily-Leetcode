class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        // int i=0;
        // while(k>=chalk[i]){
        //     k=k-chalk[i];
        //     i++;
        //     if(i>chalk.size()-1){
        //         i=0;
        //     }
        // }
        // return i;   //This approach gives TLE
        
        long long ans=0;
        for(auto c:chalk){
            ans+=c;
        }
        k=k%ans;
        for(int i=0;i<chalk.size();i++){
            if(k<chalk[i]){
                return i;
            }
            k-=chalk[i];
        }
        return -1;
    }
};