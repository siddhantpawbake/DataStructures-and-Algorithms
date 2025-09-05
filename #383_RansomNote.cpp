class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>abc;
        for(auto i:magazine){
             abc[i]++;
        }
       for(auto i:ransomNote){
        if(abc[i]==0) return false;
        abc[i]--;
       }
       return true;
    }
};