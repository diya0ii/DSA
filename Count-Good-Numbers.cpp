class Solution {
public:
    const int MOD= 1e9+7;
    int countGoodNumbers(long long n) {
        long long even= (n+1)/2;
        long long odd= n/2;
        long long eway= peepow(5, even);
        long long oway= peepow(4,odd);
        return (eway * oway)%MOD;
    }
    long long peepow(long long base, long long power){
        long long result=1;
        base= base%MOD;
        while(power>0){
            if(power%2==1){
                result= (result*base)%MOD;

            }
            base= (base*base)%MOD;
            power= power/2;
        }
        return result;
    
    }
};