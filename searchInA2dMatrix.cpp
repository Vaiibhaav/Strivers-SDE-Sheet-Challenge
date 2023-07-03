class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(matrix[mid][0]>target){
                h=mid-1;
            }else{
                if(matrix[mid][m-1]>=target){
                    for(int i=0;i<m;i++){
                        if(matrix[mid][i]==target)return true;
                    }
                    return false;
                }
                l=mid+1;
            }
        }
        return false;
    }
};