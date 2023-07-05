class Solution {
public:
    int merge(int low,int mid,int high, vector<int> &nums){
        vector<int> var;
        int ans=0;
        int left=low,right=mid+1;
        while(left<=mid){
            while(right<=high&&nums[left]>(2*(long long)nums[right])){
                right++;
            }
            ans+=right-(mid+1);
            left++;
        }
        left=low;
        right=mid+1;
        while(left<=mid&&right<=high){
            if(nums[left]<=nums[right]){
                var.push_back(nums[left]);
                left++;
            }else{
                var.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            var.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            var.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=var[i-low];
        }
        return ans;
    }
    int mergesort(int low,int high,vector<int> &nums){
        if(low>=high)return 0;
        long long a=0;
        long long mid=(low+high)/2;
        a+=mergesort(low,mid,nums);
        a+=mergesort(mid+1,high,nums);
        a+=merge(low,mid,high,nums);
        return a;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(0,nums.size()-1,nums);
    }
};