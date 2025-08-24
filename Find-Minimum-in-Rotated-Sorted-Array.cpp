class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int n= nums.size();
        int h=n-1;
        
        while(l<=h){
            if (nums[l] <= nums[h]) return nums[l];
            int m =l+(h-l)/2;
            if(l==h) return nums[m];
            if(m>0 && nums[m]<nums[m-1]){
                return nums[m];
            }
            if(m<n-1 && nums[m]>nums[m+1]){
                return nums[m+1];
            }
            if(nums[m]>=nums[l]){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return -1;
    }
};