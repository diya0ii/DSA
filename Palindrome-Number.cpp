class Solution {
public:
    bool isPalindrome(long n) {
        long revNum=0;
        long dup =n;
        while(n>0){
            long Id=n%10;
            revNum=(revNum * 10)+ Id;
            n=n/10;
        }
        if(dup==revNum){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};