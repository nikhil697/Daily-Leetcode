class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result(m,vector<int>(n));
        if (m * n != original.size()) {
            return vector<vector<int>>(0, vector<int>(0));
        }
        
        int index=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result[i][j]=original[index];
                index++;
            }
            
        }
        
        return result;
        
    }
};