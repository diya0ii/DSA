class Solution {
public:
     vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, 0);  // Initialize result array with 0s

        int posIdx = 0, negIdx = 1;  // Indices for placing positive and negative numbers

        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                ans[posIdx] = arr[i];  // Place positive number at even index
                posIdx += 2;           // Move to next available even index
            } else {
                ans[negIdx] = arr[i];  // Place negative number at odd index
                negIdx += 2;           // Move to next available odd index
            }
        }

        return ans;  // Return rearranged array
    }
};