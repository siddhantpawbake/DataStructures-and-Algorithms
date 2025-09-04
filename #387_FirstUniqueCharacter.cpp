class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>abc;
        for(auto i:s){
            abc[i]++;
        }
         for (int i = 0; i < s.size(); i++) {
            if (abc[s[i]]==1){
                return i;
            }
        }
        
        return -1;

    }
};