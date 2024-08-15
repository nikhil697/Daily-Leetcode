class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>>pq;
        
        vector<pair<int,int>>v;
        vector<int>b;
        for(int i=0;i<arr.size();i++){
            v.push_back({abs(x-arr[i]),arr[i]});
        }
        
        for(int i=0;i<v.size();i++){
            pq.push(v[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            b.push_back(pq.top().second);
            pq.pop();
        }
        sort(b.begin(),b.end());
        return b;
        
    }
};