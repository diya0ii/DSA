#include <unordered_map>
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> umap;
        umap['I']=1;
        umap['V']=5;
        umap['X']=10;
        umap['L']=50;
        umap['C']=100;
        umap['D']=500;
        umap['M']=1000;
        int num=0;
        for(int i=0;i<s.size()-1;i++){
            int cur= umap[s[i]];
            int next = umap[s[i+1]];
            if(cur<next){
                num-=cur;
            }
            else{
                num+=cur;
            }
        }
        num += umap[s.back()];
        return num;
    }
};