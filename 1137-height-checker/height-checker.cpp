class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> decheight;
        int count=0;
        for (int i=0;i<heights.size();i++){
            decheight.push_back(heights[i]);
        }
        sort(decheight.begin(),decheight.end());
        
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=decheight[i]){
                count+=1;
            }
        }
        return count;
    }
};