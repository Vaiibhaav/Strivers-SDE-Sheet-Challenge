//-->my solution//most optimal//implementation of stl function
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)return ;
        int ind1=0;
        bool flag =true;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                flag=false;
                ind1=i-1;
                break;
            }
        }
        if(flag){
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=nums.size()-1;i>ind1;i--){
            if(nums[i]>nums[ind1]){
                swap(nums[i],nums[ind1]);
                sort(nums.begin()+ind1+1,nums.end());
                break;
            }
        }
    }
};
//-->recerssion ones (brute force)
// better use stl next_permu(arr.begin(),arr.end());
