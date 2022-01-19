// Question link: https://leetcode.com/problems/minimum-size-subarray-sum/

//--------------------------------------------------CODE----------------------------------

class Solution {
public:
    
    bool possible(int l, vector<int>& nums, int tar){
        int sum=0;
        int i=0;
        for(;i<l;i++){
            sum+=nums[i];
        }
        if(sum>=tar)
            return true;
        for(;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-l];
            if(sum>=tar)
                return true;
        }
        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=1, high = nums.size(),mid;
        int ans =0;
        while(low<=high){
            mid = low+(high-low)/2;
            bool check  = possible(mid,nums,target);
            if(check){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};