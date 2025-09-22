class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int> mp;
        int maxfreq=0;
        for(int i : nums){
            mp[i]++;
        }
        for(auto& [key,value] : mp){
            maxfreq= max(maxfreq, value);
        }
        int sum=0;
        for(auto& [key,value] : mp){
            if(value==maxfreq){
                sum+= value;
            }
        }
        return sum;
    }
};