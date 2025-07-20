class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        while(i+1<n && nums[i]<=nums[i+1] ) i++;
        if(i==n-1) return true;

        i++;
        while(i+1<n && nums[i]<=nums[i+1]) i++;
        if(i!=n -1) return false;
        
        return nums[n-1]<=nums[0];
    }
};