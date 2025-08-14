class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int n= s.size();
        int j=n-1;
        while(i<=j){
            int temp= s[j];
            s[j]=s[i];
            s[i]= temp;
            i++;
            j--;
        }
    }
};