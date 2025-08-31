class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix= strs[0];
        for(int i=1;i<strs.size();i++){
            string word = strs[i];
            string temp= "";
            for(int j= 0; j< min(prefix.size(), word.size());j++){
                if(prefix[j]==word[j]){
                    temp+= prefix[j];
                }
                else{
                    break;
                }
                //loop mistake krdi
            }
            prefix=temp;
        }
        if(prefix==""){
            return "";
        }
        return prefix;
    }
};