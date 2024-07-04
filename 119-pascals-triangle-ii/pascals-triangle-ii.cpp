class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex+=1;
        long long ans=1;
        vector <int> answer;
        answer.push_back(1);
        for(int i=1;i<rowIndex;i++){
            ans = ans * (rowIndex-i);
            ans=ans/i;
            answer.push_back(ans);
        }
        return answer;
    }
};