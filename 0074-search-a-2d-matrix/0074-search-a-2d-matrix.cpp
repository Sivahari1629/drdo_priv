class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
       int low=0;
       int high=matrix.size()*matrix[0].size()-1;
       int m=matrix[0].size();
       bool t=false;
       
       while(low<=high)
       {
        int mid=low+(high-low)/2;
        if(matrix[mid/m][mid%m]==target)
        {
            t=true;
        }

        if(matrix[mid/m][mid%m]>target)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       }
       return t;
    }
};