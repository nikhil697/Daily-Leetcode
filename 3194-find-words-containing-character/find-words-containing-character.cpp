class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> new1;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                    new1.push_back(i);
                    break;
                }
                else{
                    continue;
                }
            }
            
        }
        
        return new1;
    }
};