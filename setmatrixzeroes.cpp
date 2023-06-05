class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       set<int> r,c;
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               if(matrix[i][j]==0){
                   r.insert(i);
                   c.insert(j);
               }
           }
       }
       for(auto &x:c){
           for(int i=0;i<matrix.size();i++){
               matrix[i][x]=0;
           }
       }
       for(auto &x:r){
           for(int j=0;j<matrix[0].size();j++){
               matrix[x][j]=0;
           }
       }
    }
};

