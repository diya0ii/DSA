class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int maxi=0;

        
        for(int i=0; i<n;i++){
            mini= min(mini,prices[i]);
            int profit= prices[i]-mini;
            maxi= max(maxi,profit);
            
        }

        return maxi;

        
    }
};