class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        map<int,string> myMap;
        for(int i=0;i<names.size();i++){
            myMap[heights[i]] = names[i];
        }
        names.clear();
        
        sort(heights.begin(),heights.end());
        for(int i=heights.size()-1;i>=0;i--){
            names.push_back(myMap[heights[i]]);
        }
        
        return names;
        
    }
};