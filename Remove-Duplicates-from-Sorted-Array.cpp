class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = unique(nums.begin(),nums.end());
        int k= distance(nums.begin(),it);
        return k;
    }
};