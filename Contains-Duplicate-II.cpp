class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(i+l>k){
                mp.erase(nums[l]);
                l++;
            }
            if(mp.find(nums[i])!= mp.end()){
                return true;

            }
            mp[nums[i]]=i;
        }

        return false;

    }
};