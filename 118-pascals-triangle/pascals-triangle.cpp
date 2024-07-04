class Solution {
public:
    vector <int> generateRow(int rowNumber){
        vector<int> answer;
        long long ans=1;
        answer.push_back(1);
        for(int col=1;col<rowNumber;col++){
            ans=ans*(rowNumber-col);
            ans=ans/col;
            answer.push_back(ans);
        }
        return answer;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
       return ans; 
    }
};