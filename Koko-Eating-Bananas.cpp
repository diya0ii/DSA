class Solution {
public:
    int maxi(vector<int>& v){
        int m= INT_MIN;
        for(int i=0;i<v.size();i++){
            m= max(m,v[i]);
        }
        return m;
    }
    long long perhr(vector<int> &v, int midi){
        long long tot= 0;
        for(int i =0;i<v.size();i++){
            tot+= (v[i] + midi-1)/midi;
        }
        return tot;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high= maxi(piles);
        while(low<=high){
            int mid= low+(high-low)/2;
            long long tot= perhr(piles,mid);
            if(tot<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;

    }
};