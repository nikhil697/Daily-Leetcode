class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<string> newname;
        
        map<int,string> myMap;
        for(int i=0;i<names.size();i++){
            myMap[heights[i]] = names[i];
        }
        
        for (auto it = myMap.rbegin(); it != myMap.rend(); ++it) {
            newname.push_back(it->second);
        }
        
        return newname;
        
    }
};