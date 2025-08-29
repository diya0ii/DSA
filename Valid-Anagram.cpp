class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> ml;
        int n = s.size();
        int m= t.size();
        if(m!=n) return false;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            ml[t[i]]++;
        }
        for(auto &p :mp){
            char key = p.first;
            int val= p.second;
            if(ml.find(key)== ml.end()) return false;
            if(ml[key]!= val) return false;
        }
        return true;
    }
};