class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int count=0;
            if(edges[0][0]==edges[1][0] || edges[0][0]==edges[1][1]){
                count=edges[0][0];
            }
            else{
                count=edges[0][1];
            }
        return count;
        
    }
};