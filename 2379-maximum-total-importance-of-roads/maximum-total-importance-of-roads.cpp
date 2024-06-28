class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long ans = 0;
        vector <int> edgeCt(n,0);
        for(const auto& road:roads){
            edgeCt[road[0]]++;
            edgeCt[road[1]]++;
        }
        sort(edgeCt.begin(),edgeCt.end());
        for(int i=n-1;i>=0;i--){
            ans=ans+(long)edgeCt[i]*long(i+1);
        }
        return ans;
    }
};