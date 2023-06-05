//code that i wrote T.C.O(N2)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> row1={1};
        vector<vector<int>> ans;
        ans.push_back(row1);
        if(numRows==1)return ans;
        row1.push_back(1);
        ans.push_back(row1);
        if(numRows==2)return ans;
        for(int i=1;i<=numRows-2;i++){
            vector<int> prev=ans[ans.size()-1];
            vector<int> var;
            var.push_back(1);
            for(int i=1;i<prev.size();i++){
                var.push_back(prev[i]+prev[i-1]);
            }
            var.push_back(1);
            ans.push_back(var);
        }
        return ans;
    }
};
//nicer code quality same approch 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> row1={1};
        vector<vector<int>> ans;
        ans.push_back(row1);
        if(numRows==1)return ans;
        row1.push_back(1);
        ans.push_back(row1);
        if(numRows==2)return ans;
        for(int i=1;i<=numRows-2;i++){
            vector<int> prev=ans[ans.size()-1];
            vector<int> var;
            var.push_back(1);
            for(int i=1;i<prev.size();i++){
                var.push_back(prev[i]+prev[i-1]);
            }
            var.push_back(1);
            ans.push_back(var);
        }
        return ans;
    }
};