class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n= s.size();
        int m= goal.size();
        if(n==1) return false;
        if(n!=m) return false;
        
        if(s==goal){
            vector<int> freq(26,0);
            for(char c : s) {
                if(++freq[c- 'a']>1){
                    return true;
                }
                
            }
            return false;
        }
        
        vector<int> diff;

        for(int i=0;i<n;i++){
            if(s[i]!=goal[i]){
                diff.push_back(i);
            }
        }
        if(diff.size()!=2) return false;
        return s[diff[0]]== goal[diff[1]] && s[diff[1]] == goal[diff[0]];

    }
};