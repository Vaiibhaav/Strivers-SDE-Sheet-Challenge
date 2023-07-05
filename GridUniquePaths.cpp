class Solution {
public:
    int f(int m,int n,vector<vector<int>> &dp){
        if(m==0&&n==0){
            return 1;
        }
        if(dp[m][n]!=-1)return dp[m][n];
        int ans=0;
        if(m>0){
            ans+=f(m-1,n,dp);
        }
        if(n>0){
            ans+=f(m,n-1,dp);
        }
        return dp[m][n]=ans;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return f(m-1,n-1,dp);
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,0));
        dp[0][0]=1; 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i>0){
                    dp[i][j]+=dp[i-1][j];
                }
                if(j>0){
                    dp[i][j]+=dp[i][j-1];
                }
            }
        }
        return dp[m-1][n-1];
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> prev(n,1),curr(n,0);
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    curr[j]=prev[j];
                }
                if(i>0){
                    curr[j]+=prev[j];
                }
                if(j>0){
                    curr[j]+=curr[j-1];
                }
            }
            prev=curr;
            for(int k=0;k<n;k++)curr[k]=0;
        }
        return prev[n-1];
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=n+m-2;
        int r=n-1;
        double res=1;
        for(int i=1;i<=r;i++){
            res*=(N-r+i);
            res/=i;
        }
        return (int)res;
    }
};