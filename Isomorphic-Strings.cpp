class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> sec;
        int n= s.size();
        int m= t.size();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])== mp.end()){
                mp[s[i]]=i;
            }
            if(sec.find(t[i])== mp.end()){
                sec[t[i]]=i;
            }
            if(mp[s[i]] != sec[t[i]]) return false;
        }
        return true;
    }
};