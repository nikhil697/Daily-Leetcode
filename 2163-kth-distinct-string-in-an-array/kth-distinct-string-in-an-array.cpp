class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        map<string,int> storage;
        for (const auto& str : arr) {
            storage[str]++;
        }
        
        vector<string>new1;
        for (const auto& str : arr) {
            if(storage[str]==1){
                new1.push_back(str);
            }
        }
        if(k>new1.size()){
            return "";
        }
        return new1[k-1];
              
    }
};