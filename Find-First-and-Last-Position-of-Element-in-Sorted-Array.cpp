class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        vector<int> arrey={-1,-1};
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]<target){
                left=mid+1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                arrey[0]=mid;
                right=mid-1;
            }
        }
        if (arrey[0]==-1) return arrey;
        left=arrey[0];
        right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]<target){
                left=mid+1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                arrey[1]= mid;
                left=mid+1;
            }
        }
        return arrey;
    }
};