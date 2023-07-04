//iterative
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long nn=n;
        if(nn<0)nn*=-1;
        while(nn){
            if(nn%2){
                ans=ans*x;
                nn=nn-1;
            }else{
                x=x*x;
                nn=nn/2;
            }
        }
        if(n<0)ans=1/ans;
        return ans;
    }
};
//reccursive
class Solution {
public:
    double power (double x,long long n)
    {   
        if(n==0)return 1;
        double ans=1;
        if(n%2==0){
            ans*=power(x*x,n/2);
        }else{
            ans*=x*power(x,n-1);
        }
        return ans;
    }
    double myPow(double x, int n) {
        double ans=1;
        bool f=false;
        long long var=n;
        if(var<0){
            var*=-1;
            f=true;
        }
        ans=power(x,var);
        if(f)ans=1/ans;
        return ans;
    }
};