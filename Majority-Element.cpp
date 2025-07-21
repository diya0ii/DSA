class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> maj;
        int m;
        int n= nums.size();
        for(int i=0;i<n;i++){
            maj[nums[i]]++;
        }
        for(auto it=maj.begin();it!=maj.end();++it){
            if(it->second>n/2){
                m= it->first;
            }
        }
        return m;
    }
};