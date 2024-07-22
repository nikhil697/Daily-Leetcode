class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        map<int,string> myMap;
        for(int i=0;i<names.size();i++){
            myMap[heights[i]] = names[i];
        }
        names.clear();
        
        for (auto it = myMap.rbegin(); it != myMap.rend(); ++it) {
            names.push_back(it->second);
        }
        
        return names;
        
    }
};