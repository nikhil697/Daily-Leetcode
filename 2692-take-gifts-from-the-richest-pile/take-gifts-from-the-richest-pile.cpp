class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>pq;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        for(int i=0;i<k;i++){
            long long x=pq.top();
            pq.pop();
            x=floor(sqrt(x));
            pq.push(x);
        }
        long long count=0;
        while(!pq.empty()){
            count=count+pq.top();
            pq.pop();
        }
        return count;
    }
};