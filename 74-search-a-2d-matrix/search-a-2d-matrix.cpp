class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int x=n*m;
        int low=0;
        int high=x-1;
        while(high>=low){
            int mid=(low+high)/2;
            int rowno=mid/m;
            int colno=mid%m;
            if(matrix[rowno][colno]==target){
                return true;
            }
            else if(matrix[rowno][colno]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            cout<<matrix[rowno][colno];
        }
        
        return false;
    }
};