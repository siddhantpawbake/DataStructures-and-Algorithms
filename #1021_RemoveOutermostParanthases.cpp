class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int depth=0;
        for(auto c:s){
            if(c=='('){
                if(depth++){
                    ans+=c;
                }}
            else{
                if(--depth){
                    ans+=c;
                }
            }
        }
    return ans;    
    }
};