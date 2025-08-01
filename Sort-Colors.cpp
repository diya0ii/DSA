class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int mid=0,low=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};